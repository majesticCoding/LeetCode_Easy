#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "binaryTreesAPI.h"

using namespace std;

int maxDepth(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	}
	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);

	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

/*int main() {

	string buffer;
	int tmp;

	TreeNode* t = nullptr;
	cout << "enter the tree: ";
	getline(cin, buffer);
	vector<int> a;
	istringstream iss(buffer);
	while (iss >> tmp) {
		a.push_back(tmp);
	}
	array2Tree(&t, a, 0, a.size());
	cout << maxDepth(t);
	_getch();
	return 0;
}*/