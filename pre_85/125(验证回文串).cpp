//#include<iostream>
//#include<string>
//#include<cctype>
//
//using namespace std;
//
///*解法1：首尾双指针夹逼*/
//class Solution1 {
//public:
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		for (auto &c : s) //将s中的大写字母一律转换成小写
//			c = tolower(c);
//		auto bp = s.begin(), ep = s.end() - 1;	
//		while (bp < ep) {
//			if (!isalnum(*bp))	//如果指针bp不是字母或者数字，向后移
//				++bp;
//			if (!isalnum(*ep))	//如果指针ep不是字母或者数字，向前移
//				--ep;
//			if (isalnum(*bp) && isalnum(*ep) && *bp != *ep) {	//如果指针bp和ep所指皆为字母，且值不相等，则返回false
//				return false;
//			}
//			if (isalnum(*bp) && isalnum(*ep) && *bp == *ep) { //如果指针bp和ep所指皆为字母，且值相等，指针bp后移，指针ep前移
//				++bp;
//				--ep;
//			}
//		}
//		return true;	
//	}
//};
//
///*解法2：利用栈，感觉还不如双指针，可以尝试*/
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