#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int adjust(TreeNode * root)
	{
		if (root == NULL)
			return 0;
		int left = 1 + adjust(root->left);
		int right = 1 + adjust(root->right);
		return left > right ? left : right;
	}
	int depth(TreeNode* left, TreeNode* right)
	{
		return abs(adjust(left) - adjust(right));
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == NULL)
			return true;
		if (depth(pRoot->left, pRoot->right) > 1)
			return false;
		return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
	}
};