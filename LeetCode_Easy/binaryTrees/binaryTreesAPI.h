#pragma once
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


void array2Tree(TreeNode** root, vector<int> nums, int index, int size);
void inOrderTraversal(TreeNode* root);
void preOrderTraversal(TreeNode* root);
void postOrderTraversal(TreeNode* root);
bool isSameTree(TreeNode* p, TreeNode* q);
bool isSymmetric(TreeNode* root);
int maxDepth(TreeNode* root);