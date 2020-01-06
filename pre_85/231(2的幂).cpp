///*
//题目描述：
//	给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
//
//示例 1:
//	输入: 1
//	输出: true
//	解释: 20 = 1
//示例 2:
//	输入: 16
//	输出: true
//	解释: 24 = 16
//示例 3:
//	输入: 218
//	输出: false
//*/
//#include<iostream>
//
//using namespace std;
//
///*解法1：常规思路*/
//class Solution1 {
//public:
//	bool isPowerOfTwo(int n) {
//		if (n <= 0)
//			return false;
//		while (n >= 2) {
//			if (n % 2 != 0)
//				return false;
//			n /= 2;
//		}
//		return true;
//	}
//};
//
///*解法2(看了题解):位运算
//如果n=2^x且x为自然数，则一定满足条件：n&(n-1)==0
//这事因为:n二进制最高位为1，其余所有位为0；
//n-1二进制最高位为0，其余所有位为1
//而且n>0
//*/
//class Solution2 {
//public:
//	bool isPowerOfTwo(int n) {
//		return n > 0 && (n&(n - 1)) == 0;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	cout << s.isPowerOfTwo(-1) << endl;
//	cout << s.isPowerOfTwo(1) << endl;
//	cout << s.isPowerOfTwo(16) << endl;
//	cout << s.isPowerOfTwo(218) << endl;
//	return 0;
//}