#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "binaryTreesAPI.h"

using namespace std;

bool isTreeAMirror(TreeNode* p, TreeNode* q) {
	if ((p != NULL && q == NULL) || (q != NULL && p == NULL)) {
		return false;
	}
	if (!p && !q) {
		return true;
	}
	if (p->val != q->val) {
		return false;
	}
	return isTreeAMirror(p->left, q->right) && isTreeAMirror(p->right, q->left);
}

bool isSymmetric(TreeNode* root) {
	if (root == NULL) {
		return true;
	}
	return isTreeAMirror(root->left, root->right);
}

/*int main() {

	string buffer;
	int tmp;

	TreeNode* t = NULL;
	cout << "enter the tree: ";
	getline(cin, buffer);
	vector<int> a;
	istringstream iss(buffer);
	while (iss >> tmp) {
		a.push_back(tmp);
	}
	array2Tree(&t, a, 0, a.size());
	cout << isSymmetric(t);
	_getch();
	return 0;
}*/