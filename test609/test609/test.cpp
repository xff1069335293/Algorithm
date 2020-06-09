#define _CRT_SECURE_NO_WARNINGS 1
/*ʹ��ջʵ�ֶ��е����в�����
push(x) --��һ��Ԫ�ط�����е�β����
pop() --�Ӷ����ײ��Ƴ�Ԫ�ء�
peek() --���ض����ײ���Ԫ�ء�
empty() --���ض����Ƿ�Ϊ�ա�
ʾ�� :
MyQueue queue = new MyQueue();
queue.push(1);
queue.push(2);
queue.peek();  // ���� 1
queue.pop();   // ���� 1
queue.empty(); // ���� false
*/
class MyQueue {
private:
	stack<int> spush, spop;
public:
	/** Initialize your data structure here. */
	MyQueue() { }

	/** Push element x to the back of queue. */
	void push(int x) {
		spush.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (spop.empty())
		{
			while (!spush.empty())
			{
				int top = spush.top();
				spop.push(top);
				spush.pop();
			}
		}
		int ret = spop.top();
		spop.pop();
		return ret;
	}

	/** Get the front element. */
	int peek() {
		int ret = pop();
		spop.push(ret);
		return ret;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return spop.empty() && spush.empty();
	}

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */