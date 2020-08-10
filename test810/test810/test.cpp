#define _CRT_SECURE_NO_WARNINGS 1
//操作给定的二叉树，将其变换为源二叉树的镜像。
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

		//左子树的左节点和右子树的右节点交换
		//左子树的右节点和右子树的左节点交换
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