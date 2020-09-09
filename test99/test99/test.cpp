#define _CRT_SECURE_NO_WARNINGS 1
//	°üº¬minº¯ÊýµÄÕ»
class Solution {
public:
	stack<int> data, minval;
	void push(int value) {
		data.push(value);
		if (minval.empty())
			minval.push(value);

		int topval = minval.top();
		if (value > topval)
			minval.push(topval);
		else
			minval.push(value);

	}
	void pop() {
		if (!data.empty() && !minval.empty())
		{
			data.pop();
			minval.pop();
		}
	}
	int top() {

		return data.top();
	}
	int min() {
		return minval.top();
	}
};