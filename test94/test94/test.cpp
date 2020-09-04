#define _CRT_SECURE_NO_WARNINGS 1
//两个链表的第一个公共结点
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
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		ListNode* cur1 = pHead1;
		ListNode* cur2 = pHead2;
		while (cur2 != cur1)
		{
			cur1 = cur1 ? cur1->next : pHead1;
			cur2 = cur2 ? cur2->next : pHead2;
		}
		return cur1;
	}
};