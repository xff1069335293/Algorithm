#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	ListNode* EntryNodeOfLoop(ListNode* pHead) {
		auto *i = pHead, *j = pHead;
		do {
			if (!j->next) return NULL; 
			i = i->next, j = j->next->next; //慢指针走一步，快指针走两步
		} while (i != j);
		for (i = pHead; i != j; i = i->next) j = j->next;
		return i;
	}
};