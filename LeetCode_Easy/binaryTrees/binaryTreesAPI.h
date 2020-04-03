#pragma once
#include <vector>

using namespace std;

typedef struct TreeNode;

void array2Tree(TreeNode** root, vector<int> nums, int index, int size);
void inOrderTraversal(TreeNode* root);
void preOrderTraversal(TreeNode* root);
void postOrderTraversal(TreeNode* root);