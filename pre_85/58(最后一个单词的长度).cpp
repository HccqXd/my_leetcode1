//#include<iostream>
//#include<string>
//
//using namespace std;
//
///*�ⷨһ��˫ָ�뷨*/
//class Solution1 {
//public:
//	int lengthOfLastWord(string s) {
//		auto prePtr = s.begin(), currPtr = s.begin();
//		int result = 0;
//		if (s.empty())
//			return 0;
//		while (currPtr != s.end()) {
//			if (!isspace(*currPtr)) {	//����ǰָ����ָ�ַ���Ϊ�ո���ǰָ������ƶ�
//				++currPtr;
//				result = currPtr - prePtr;
//			}
//			else {	//�����ո񣬵�ǰָ���Ⱥ��ƶ���Ȼ�󵥴ʿ�ʼָ���Ƶ���ǰָ��
//				++currPtr;
//				prePtr = currPtr;
//			}
//		}
//		return result;	//��������ָ��ľ��룬Ҳ���Ƿ������һ�����ʵĳ���
//	}
//};
//
//int main(int argc, char** argv) {
//	string test1 = "Hello World";
//	string test2 = "  Hello";
//	string test3 = "Hello ";
//	string test4 = " Hello ";
//	Solution1 s1;
//	int result;
//	result = s1.lengthOfLastWord(test4);
//	cout << result << endl;
//}