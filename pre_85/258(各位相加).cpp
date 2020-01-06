///*
//题目描述：
//	给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
//
//示例:
//
//	输入: 38
//	输出: 2 
//	解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回2
//*/
//#include<iostream>
//
//using namespace std;
//
///*解法1：循环*/
//class Solution1 {
//public:
//	int addDigits(int num) {
//		int res = num;
//		while (res>=10) {
//			int sum = 0;
//			while (res > 0) {
//				int i = res % 10;
//				sum += i;
//				res /= 10;
//			}
//			res = sum;
//		}
//		return res;
//	}
//};
//
///*解法2(来自题解)：找规律
//设一个三位数整数n=100*a+10*b+c,变化后addn=a+b+c；
//两者的差值n-addn=99a+9b，差值可以被9整除，说明每次缩小9的倍数
//那么我们可以对res=num%9，若不为0则返回res，为0则返回9
//
//作者：chenlele
//链接：https://leetcode-cn.com/problems/add-digits/solution/ge-wei-xiang-jia-by-gpe3dbjds1/
//来源：力扣（LeetCode）
//*/
//class Solution2 {
//public:
//	int addDigits(int num) {
//		if (num > 9) {
//			num = num % 9;
//			if (num == 0)
//				return 9;
//		}
//		return num;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.addDigits(10) << endl;
//	return 0;
//}