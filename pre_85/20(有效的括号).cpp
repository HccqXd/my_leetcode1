//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//class Solution1 {
//public:
//	bool isValid(string s) {
//		stack<char> cs;
//		if (s[0]==')'||s[0]=='}'||s[0]==']') //字符串第0个元素就是右括号，返回false
//			return false;
//		for (int i = 0; i != s.size(); i++) {
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[') { //如果是左括号，压入栈
//				cs.push(s[i]);
//			}
//				
//			if (s[i] == ')') { //如果是右括号
//				if (cs.empty()) //如果栈为空，返回false
//					return false;
//				if (cs.top() == '(') //如果栈顶元素是对应的左括号，则栈顶元素出栈
//					cs.pop();
//				else  //如果栈顶元素不是对应的左括号，则返回false
//					return false;
//			}
//			if (s[i] == '}') {
//				if (cs.empty())
//					return false;
//				if (cs.top() == '{')
//					cs.pop();
//				else
//					return false;
//			}
//			if (s[i] == ']') {
//				if (cs.empty())
//					return false;
//				if (cs.top() == '[')
//					cs.pop();
//				else
//					return false;
//			}
//		}
//		if (cs.size() == 0) //出循环时，如果栈为空，则返回true
//			return true;
//		else
//			return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	//string str = "([)]";
//	//string str = "{}";
//	//string str = "]";
//	//string str = "(]";
//	string str = "[])";
//	bool result = s1.isValid(str);
//	cout << result << endl;
//	return 0;
//}