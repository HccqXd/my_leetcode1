///*
//题目描述：
//	使用栈实现队列的下列操作：
//		push(x) -- 将一个元素放入队列的尾部。
//		pop() -- 从队列首部移除元素。
//		peek() -- 返回队列首部的元素。
//		empty() -- 返回队列是否为空。
//*/
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
///*解法:双栈法
//栈s1是保存新加入的元素
//只要栈s2不为空，栈s2栈顶元素总是所有元素的最先压入s1中的
//*/
//
//class MyQueue {
//public:
//	/** Initialize your data structure here. */
//	MyQueue() {
//
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		if (s1.empty())
//			first = x;
//		s1.push(x);	//将新元素直接加入s1
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		if (s1.empty()&&s2.empty())
//			return -1;
//		if (s2.empty()) {
//			while (!s1.empty()) {	//将s1中的元素依次出栈，并压入s2中，此时s1的栈底元素是s2的栈顶元素
//				int tmp = s1.top();
//				s1.pop();
//				s2.push(tmp);
//			}
//		}
//		int res = s2.top();
//		s2.pop();
//		return res;
//	}
//
//	/** Get the front element. */
//	int peek() {
//		if (!s2.empty())
//			return s2.top();
//		return first;
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		if (s1.empty() && s2.empty())
//			return true;
//		return false;
//	}
//private:
//	stack<int> s1;
//	stack<int> s2;
//	int first; //用来保存栈s1中最先压入栈的元素，也就是栈底元素，如果s2为空，它就是队列首元素
//};
