//#include<iostream>
//#include<string>
//#include<cctype>
//
//using namespace std;
//
///*�ⷨ1����β˫ָ��б�*/
//class Solution1 {
//public:
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		for (auto &c : s) //��s�еĴ�д��ĸһ��ת����Сд
//			c = tolower(c);
//		auto bp = s.begin(), ep = s.end() - 1;	
//		while (bp < ep) {
//			if (!isalnum(*bp))	//���ָ��bp������ĸ�������֣������
//				++bp;
//			if (!isalnum(*ep))	//���ָ��ep������ĸ�������֣���ǰ��
//				--ep;
//			if (isalnum(*bp) && isalnum(*ep) && *bp != *ep) {	//���ָ��bp��ep��ָ��Ϊ��ĸ����ֵ����ȣ��򷵻�false
//				return false;
//			}
//			if (isalnum(*bp) && isalnum(*ep) && *bp == *ep) { //���ָ��bp��ep��ָ��Ϊ��ĸ����ֵ��ȣ�ָ��bp���ƣ�ָ��epǰ��
//				++bp;
//				--ep;
//			}
//		}
//		return true;	
//	}
//};
//
///*�ⷨ2������ջ���о�������˫ָ�룬���Գ���*/
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	string str1 = "A man, a plan, a canal: Panama";
//	string str2 = "race a car";
//	string str3 = ",,2,,";
//	string str4 = "01";
//	cout << s.isPalindrome(str4) << endl;
//	return 0;
//}