///*
//��Ŀ������
//	ʹ��ջʵ�ֶ��е����в�����
//		push(x) -- ��һ��Ԫ�ط�����е�β����
//		pop() -- �Ӷ����ײ��Ƴ�Ԫ�ء�
//		peek() -- ���ض����ײ���Ԫ�ء�
//		empty() -- ���ض����Ƿ�Ϊ�ա�
//*/
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
///*�ⷨ:˫ջ��
//ջs1�Ǳ����¼����Ԫ��
//ֻҪջs2��Ϊ�գ�ջs2ջ��Ԫ����������Ԫ�ص�����ѹ��s1�е�
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
//		s1.push(x);	//����Ԫ��ֱ�Ӽ���s1
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		if (s1.empty()&&s2.empty())
//			return -1;
//		if (s2.empty()) {
//			while (!s1.empty()) {	//��s1�е�Ԫ�����γ�ջ����ѹ��s2�У���ʱs1��ջ��Ԫ����s2��ջ��Ԫ��
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
//	int first; //��������ջs1������ѹ��ջ��Ԫ�أ�Ҳ����ջ��Ԫ�أ����s2Ϊ�գ������Ƕ�����Ԫ��
//};
