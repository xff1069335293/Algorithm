#define _CRT_SECURE_NO_WARNINGS 1
//二叉树的下一个结点
/*
struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

	}
};
*/
class Solution {
public:
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode == nullptr)
			return nullptr;

		//当前结点有右结点时，找右子树的左结点
		if (pNode->right)
		{
			pNode = pNode->right;
			while (pNode->left)
			{
				pNode = pNode->left;
			}
			return pNode;
		}
		//找父亲结点
		while (pNode->next)
		{
			TreeLinkNode* root = pNode->next;
			if (root->left == pNode)
				return root;
			pNode = pNode->next;
		}
		return nullptr;
	}
};	