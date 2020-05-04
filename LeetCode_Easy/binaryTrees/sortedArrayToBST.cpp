#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
#include "binaryTreesAPI.h"

using namespace std;

void convertingArray2BST(vector<int>& nums, int left, int right, TreeNode** root) {
	//cout << left << " " << right << endl;
	if (left > right) {
		return;
	}

	int mid = (left + right) / 2;
	*root = new TreeNode(nums[mid]);
	convertingArray2BST(nums, left, mid - 1, &(*root)->left);
	convertingArray2BST(nums, mid + 1, right, &(*root)->right);
}


TreeNode* sortedArrayToBST(vector<int>& nums) {
	TreeNode* t = nullptr;
	convertingArray2BST(nums, 0, nums.size()-1, &t);
	return t;
}

