//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//
///*�ⷨһ���ݹ�*/
//class Solution1 {
//public:
//	string countAndSay(int n) {
//		if (n == 1)	//�ݹ����
//			return "1";
//		string preSay=countAndSay(n - 1);	//���ǰ�����������
//		string result = "";
//		int pre = 0, curr = 0;
//		while (curr != preSay.size()) {
//			if (preSay[curr] == preSay[pre]) {
//				curr++;
//			}
//		
//			else {
//				stringstream stream;	//�ַ�����ʽ�������ַ�ת��Ϊstring
//				stream << preSay[pre];
//				result = result + to_string(curr - pre) + stream.str();	
//				pre = curr;
//			}
//		}
//		if (preSay[preSay.size() - 1] == preSay[pre]) {
//			stringstream stream;
//			stream << preSay[pre];
//			result = result + to_string(curr - pre) + stream.str();
//		}
//		return result;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	string result = s1.countAndSay(4);
//	cout << result << endl;
//	return 0;
//}