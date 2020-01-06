///*
//题目描述：
//	统计所有小于非负整数 n 的质数的数量。
//
//示例:
//	输入: 10
//	输出: 4
//	解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
//*/
//#include<iostream>
//
//using namespace std;
//
///*解法1：常规解法*/
//class Solution1 {
//public:
//	int countPrimes(int n) {
//		int res = 0;
//		for (int i = 2; i < n; i++) {
//			if (isPrime(i))
//				res++;
//		}
//		return res;
//	}
//	bool isPrime(int n) {
//		for (int i = 2; i * i < n; i++) { 
//			if (n%i == 0)
//				return false;
//		}
//		return true;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.countPrimes(10) << endl;
//	return 0;
//}