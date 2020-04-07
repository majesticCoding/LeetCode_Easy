#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "binaryTreesAPI.h"

using namespace std;

void level2Array(TreeNode* root, int level, vector<int>& a) {
	if (root == nullptr) {
		return;
	}
	if (level == 0) {
		a.push_back(root->val);
	}
	if (level > 0) {
		level2Array(root->left, level - 1, a);
		level2Array(root->right, level - 1, a);
	}
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
	int size = maxDepth(root);
	vector<vector<int>> level(size);

	for (int i = 0; i < size; i++) {
		level2Array(root, i, level[i]);
	}

	reverse(level.begin(), level.end());
	return level;
}

/*int main() {

	string buffer;
	int tmp;

	TreeNode* t = nullptr;
	vector<int> a = {1, 2, 2, 3, 4, 4, 3, 5, 5, 5, 5, 5, 5, 5, 5, 6};
	array2Tree(&t, a, 0, a.size());
	vector<vector<int>> level;
	level = levelOrderBottom(t);
	for(int i = 0; i < level.size(); i++) {
		for (int j = 0; j < level[i].size(); j++) {
			cout << level[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	_getch();
	return 0;
}*/