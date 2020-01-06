///*
//题目描述：
//	使用队列实现栈的下列操作：
//		push(x) -- 元素 x 入栈
//		pop() -- 移除栈顶元素
//		top() -- 获取栈顶元素
//		empty() -- 返回栈是否为空
//*/
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//class MyStack {
//public:
//	/** Initialize your data structure here. */
//	MyStack() {
//
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		my_stack.push_front(x);
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		int res;
//		if (!my_stack.empty()) {
//			res = *my_stack.begin();
//			my_stack.pop_front();
//		}
//		else
//			return -1;
//		return res;
//	}
//
//	/** Get the top element. */
//	int top() {
//		if (!my_stack.empty())
//			return *my_stack.begin();
//		else
//			return -1;
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		if (my_stack.empty())
//			return true;
//		else
//			return false;
//	}
//private:
//	deque<int> my_stack;
//};