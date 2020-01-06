///*
//题目描述：
//	编写一个程序判断给定的数是否为丑数。
//	丑数就是只包含质因数 2, 3, 5 的正整数。
//
//示例 1:
//	输入: 6
//	输出: true
//	解释: 6 = 2 × 3
//示例 2:
//	输入: 8
//	输出: true
//	解释: 8 = 2 × 2 × 2
//
//示例 3:
//	输入: 14
//	输出: false
//	解释: 14 不是丑数，因为它包含了另外一个质因数 7。
//
//说明：
//1 是丑数。
//*/
//#include<iostream>
//
//using namespace std;
//
///*解法1:暴力法
//给定数num,依次将num除以2~(num/2),
//如果余数为0且有除(2,3,5)意外的质因数，则返回false；
//这种方法会超时
//*/
//
//class Solution1 {
//public:
//	bool isUgly(int num) {
//		if (num <= 0)
//			return false;
//		if (num == 1)
//			return true;
//		if (isPrime(num) && (!(num == 2 || num == 3 || num == 5)))
//			return false;
//		for (int i = 2; i <= num/2; i++) {
//			if ((num%i == 0) && isPrime(i) && (!(i==2||i==3||i==5)))
//				return false;
//		}
//		return true;
//	}
//	bool isPrime(int n) {
//		for (int i = 2; i * i <= n; i++) { 
//			if (n%i == 0)
//				return false;
//		}
//		return true;
//	}
//};
//
///*解法2:不断除以2,3,5直至num==1
//我们可以不管合数，因为每个合数都可以由几个质数相乘得到，
//如果除以2，3，5，除不尽，一定会包含其他的质数
//*/
//class Solution2 {
//public:
//	bool isUgly(int num) {
//		if (num <= 0)
//			return false;
//		while (num != 1) {
//			int tmp = num;
//			if (num % 2 == 0)
//				num /= 2;
//			if (num % 3 == 0)
//				num /= 3;
//			if (num % 5 == 0)
//				num /= 5;
//			if (tmp == num) //如果一趟下来num值不变，说明num还能被其它质数整除，返回假
//				return false;
//		}
//		return true;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.isUgly(7) << endl;
//	//cout << s.isPrime(3) << endl;
//	return 0;
//}