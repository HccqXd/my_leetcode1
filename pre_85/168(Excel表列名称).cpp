///*
//题目描述：
//给定一个正整数，返回它在 Excel 表中相对应的列名称。
//例如，
//1 -> A
//2 -> B
//3 -> C
//...
//26 -> Z
//27 -> AA
//28 -> AB
//...
//示例：
//示例 1:
//
//输入: 1
//输出: "A"
//示例 2:
//
//输入: 28
//输出: "AB"
//示例 3:
//
//输入: 701
//输出: "ZY"
//*/
//
////这题没想出来，看了官方题解
//
//#include<iostream>
//#include<string>
//
//using namespace std;
///*解法1:26进制转换
//注意，此题是从1开始，而不是从0开始
//*/
//class Solution {
//public:
//	string convertToTitle(int n) {
//		string res="";
//		while (n > 0) {
//			int c = n % 26;
//			if (c == 0) { //因为此题从1开始
//				c = 26;
//				n -= 1;
//			}
//			res = (char)('A' + c - 1) + res;
//			n /= 26;
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s;
//	cout << s.convertToTitle(27) << endl;
//	return 0;
//}