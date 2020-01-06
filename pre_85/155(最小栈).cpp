//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//
//class MinStack {
//public:
//	MinStack() {
//	}
//	void push(int x) {
//		stack.push_back(x);
//	}
//	void pop() {
//		if(!stack.empty())
//			stack.pop_back();
//	}
//	int top() {
//		if (!stack.empty())
//			return *(stack.end() - 1);
//		else
//			return -1;
//	}
//	int getMin() {
//		int min = INT_MAX;
//		for (auto i : stack) {
//			if (i < min)
//				min = i;
//		}
//		return min;
//	}
//private:
//	deque<int> stack;
//};
//
//int main(int argc, char** argv) {
//	MinStack *minStack = new MinStack();
//	minStack->push(2);
//	minStack->push(0);
//	minStack->push(3);
//	minStack->push(0);
//	int m1 = minStack->getMin();
//	minStack->pop();
//	int m2 = minStack->getMin();
//	minStack->pop();
//	int m3 = minStack->getMin();
//	minStack->pop();
//	int m4 = minStack->getMin();
//	cout << m1<<" "<<m2<<" "<<m3<<" "<<m4 << endl;
//	
//	return 0;
//}