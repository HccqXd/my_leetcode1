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
//		if (s[0]==')'||s[0]=='}'||s[0]==']') //�ַ�����0��Ԫ�ؾ��������ţ�����false
//			return false;
//		for (int i = 0; i != s.size(); i++) {
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[') { //����������ţ�ѹ��ջ
//				cs.push(s[i]);
//			}
//				
//			if (s[i] == ')') { //�����������
//				if (cs.empty()) //���ջΪ�գ�����false
//					return false;
//				if (cs.top() == '(') //���ջ��Ԫ���Ƕ�Ӧ�������ţ���ջ��Ԫ�س�ջ
//					cs.pop();
//				else  //���ջ��Ԫ�ز��Ƕ�Ӧ�������ţ��򷵻�false
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
//		if (cs.size() == 0) //��ѭ��ʱ�����ջΪ�գ��򷵻�true
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