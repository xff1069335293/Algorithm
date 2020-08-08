#define _CRT_SECURE_NO_WARNINGS 1
//两个栈来实现一个队列

class Solution
{
public:
	void push(int node) {
		/*int tmp=0;
	   while (!stack2.empty())
	   {
			tmp = stack2.top();
			stack2.pop();
			stack1.push(tmp);
	   }*/
		stack1.push(node);
	}

	int pop() {
		int tmp = 0;
		if (stack2.empty())
		{
			while (!stack1.empty())
			{
				tmp = stack1.top();
				stack1.pop();
				stack2.push(tmp);
			}
		}
		tmp = stack2.top();
		stack2.pop();
		return tmp;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};