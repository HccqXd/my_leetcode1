//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//
///*解法一：递归*/
//class Solution1 {
//public:
//	string countAndSay(int n) {
//		if (n == 1)	//递归出口
//			return "1";
//		string preSay=countAndSay(n - 1);	//获得前面的整数序列
//		string result = "";
//		int pre = 0, curr = 0;
//		while (curr != preSay.size()) {
//			if (preSay[curr] == preSay[pre]) {
//				curr++;
//			}
//		
//			else {
//				stringstream stream;	//字符串格式化，将字符转换为string
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