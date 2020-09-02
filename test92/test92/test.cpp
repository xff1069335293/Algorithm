#define _CRT_SECURE_NO_WARNINGS 1
//����������һ�����
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

		//��ǰ������ҽ��ʱ����������������
		if (pNode->right)
		{
			pNode = pNode->right;
			while (pNode->left)
			{
				pNode = pNode->left;
			}
			return pNode;
		}
		//�Ҹ��׽��
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