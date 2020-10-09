#define _CRT_SECURE_NO_WARNINGS 1
//栈的压入、弹出序列
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.size() != popV.size())
			return false;
		stack<int> st;
		int pushs = 0, pops = 0;
		while (pops != popV.size())
		{
			if (st.empty() || st.top() != popV[pops])
			{
				st.push(pushV[pushs++]);
			}
			else
			{
				st.pop();
				++pops;
			}
		}
		if (st.empty())
			return true;
		return false;
	}
};