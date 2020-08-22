#define _CRT_SECURE_NO_WARNINGS 1
//����һ��������ת��������������ı�ͷ��
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		ListNode* prev = nullptr;
		ListNode* cur = pHead;
		ListNode* next = nullptr;
		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		return prev;
	}
};
