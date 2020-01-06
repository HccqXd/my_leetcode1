///*
//题目描述：
//	给定一个正整数 num，编写一个函数，如果 num 是一个完全平方数，则返回 True，否则返回 False。
//
//说明：不要使用任何内置的库函数，如  sqrt。
//
//示例 1：
//	输入：16
//	输出：True
//
//示例 2：
//	输入：14
//	输出：False
//*/
//#include<iostream>
//
//using namespace std;
//
///*解法1：二分法*/
//class Solution1 {
//public:
//	bool isPerfectSquare(int num) {
//		if (num <= 1)
//			return true;
//		
//		long left = 2, right = num / 2, mid;
//		while (left < right) {
//			mid = left + (right - left) / 2;
//			if (mid*mid == num)
//				return true;
//			if (mid*mid < num)
//				left = mid + 1;
//			if (mid*mid > num)
//				right = mid - 1;
//
//		}
//		if (left*left != num)
//			return false;
//		else
//			return true;
//	}
//};
//
///*解法2(官方解答):牛顿迭代法*/
//class Solution2 {
//public:
//	bool isPerfectSquare(int num) {
//		if (num <= 1)
//			return true;
//		long res = num/2;
//		while (res*res > num) {
//			res = (res + num / res) / 2;
//		}
//		return res*res == num;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.isPerfectSquare(14) << endl;
//	return 0;
//}