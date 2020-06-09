#define _CRT_SECURE_NO_WARNINGS 1
/*使用栈实现队列的下列操作：
push(x) --将一个元素放入队列的尾部。
pop() --从队列首部移除元素。
peek() --返回队列首部的元素。
empty() --返回队列是否为空。
示例 :
MyQueue queue = new MyQueue();
queue.push(1);
queue.push(2);
queue.peek();  // 返回 1
queue.pop();   // 返回 1
queue.empty(); // 返回 false
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