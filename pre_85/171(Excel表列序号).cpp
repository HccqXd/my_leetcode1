///*
//题目描述：
//给定一个Excel表格中的列名称，返回其相应的列序号。
//
//例如，
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...
//
//示例 1:
//
//输入: "A"
//输出: 1
//示例 2:
//
//输入: "AB"
//输出: 28
//示例 3:
//
//输入: "ZY"
//输出: 701
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
///*解法1:26进制转10进制，注意个位数从1开始
//思想来自168题(Excel表列名称)
//*/
//
//class Solution {
//public:
//	int titleToNumber(string s) {
//		int res = 0;
//		long flag = 1;
//		for (int i = s.size() - 1; i >= 0; i--) {
//			res += (s[i] - 'A' + 1)*flag;
//			flag *= 26;
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s;
//	cout << s.titleToNumber("ZY") << endl;
//	return 0;
//}