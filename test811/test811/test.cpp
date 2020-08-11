#define _CRT_SECURE_NO_WARNINGS 1

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//∑÷÷Œ
class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == NULL)
			return 0;
		int left =1+ TreeDepth(pRoot->left);
		int right =1+ TreeDepth(pRoot->right);
		return left>right? left: right;
	}
};
//≤„–Ú
class Solution {
public:
	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == NULL)
			return 0;
		queue<TreeNode*> q;
		q.push(pRoot);
		int level = 0;
		while (!q.empty())
		{
			int sz = q.size();
			while (sz--)
			{
				auto node = q.front();
				q.pop();
				if (node->left)
					q.push(node->left);
				if (node->right)
					q.push(node->right);
			}
			++level;
		}
		return level;
	}
};