#define _CRT_SECURE_NO_WARNINGS 1
//合并两个排序的链表
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (!pHead1) return pHead2;
		if (!pHead2) return pHead1;
		if (pHead1->val <= pHead2->val) {
			pHead1->next = Merge(pHead1->next, pHead2);
			return pHead1;
		}
		else {
			pHead2->next = Merge(pHead1, pHead2->next);
			return pHead2;
		}
	}
};