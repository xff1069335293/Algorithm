#define _CRT_SECURE_NO_WARNINGS 1
//���������Ķ�����������任ΪԴ�������ľ���
class Solution {
public:
	/* void _Mirror(TreeNode *left,TreeNode *right)
	 {
		 if(left==NULL && right == NULL)
			 return ;
		 if (left == NULL )
			 ::swap('',right->val);
		 if (right == NULL)
			 ::swap(left->val,''NULL'');
		  ::swap(left->val,right->val);
		 _Mirror(left->left,right->right);
		 _Mirror(left->right,right->left);
	 }*/
	void Mirror(TreeNode *pRoot) {

		//����������ڵ�����������ҽڵ㽻��
		//���������ҽڵ������������ڵ㽻��
		if (NULL == pRoot)
			return;
		if (!(pRoot->left || pRoot->right))
			return;
		::swap(pRoot->left, pRoot->right);
		if (pRoot->left)
			Mirror(pRoot->left);
		if (pRoot->right)
			Mirror(pRoot->right);

	}
};