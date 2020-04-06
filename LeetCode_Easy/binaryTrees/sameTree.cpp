#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "binaryTreesAPI.h"

using namespace std;

void array2Tree(TreeNode** root, vector<int> nums, int index, int size) {
	if (index < size) {
		*root = new TreeNode(nums[index]);
		array2Tree(&(*root)->left, nums, 2 * index + 1, size);
		array2Tree(&(*root)->right, nums, 2 * index + 2, size);
	}
}

void inOrderTraversal(TreeNode* root) {
	if (root != nullptr) {
		inOrderTraversal(root->left);
		cout << root->val << " ";
		inOrderTraversal(root->right);
	}
}

void preOrderTraversal(TreeNode* root) {
	if (root != nullptr) {
		cout << root->val << " ";
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}
}

void postOrderTraversal(TreeNode* root) {
	if (root != nullptr) {
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		cout << root->val << " ";
	}
}

bool isSameTree(TreeNode* p, TreeNode* q) { 
	if ((p != nullptr && q == nullptr) || (q != nullptr && p == nullptr)) {
		return false;
	}
	if (!p && !q) {
		return true;
	}
	cout << p->val << " " << q->val << endl;
	if (p->val != q->val) {
		return false;
	}
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

/*int main() {

	string buffer;
	int tmp;

	TreeNode* t1 = nullptr;
	cout << "enter the 1st tree: ";
	getline(cin, buffer);
	vector<int> a;
	istringstream iss(buffer);
	while (iss >> tmp) {
		a.push_back(tmp);
	}
	array2Tree(&t1, a, 0, a.size());

	TreeNode* t2 = nullptr;
	cout << "enter the 2nd tree: ";
	getline(cin, buffer);
	a.clear();
	istringstream iss2(buffer);
	while (iss2 >> tmp) {
		a.push_back(tmp);
	}
	array2Tree(&t2, a, 0, a.size());
	
	cout << isSameTree(t1, t2);

	_getch();
	return 0;
}*/