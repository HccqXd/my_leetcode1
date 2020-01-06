//#include<iostream>
//
//using namespace std;
//
////别的解法没什么看头，位运算还可以
//
///*解法来自题解
//4的次方数一定是2的次方数，但2的次方数不一定是4的次方数，通过4的次方数二进制可以发现4的次方数二进制中1只出现在奇数位。
//因此可以通过于奇数位都是1，偶数为都是0的数（1010101010101010101010101010101）进行与运算，结果仍为原来数。
//
//作者：MisterBooo
//链接：https ://leetcode-cn.com/problems/power-of-four/solution/e-you-shi-yi-dao-zhuang-bi-jie-fa-de-suan-fa-ti-2/
//来源：力扣（LeetCode）
//*/
//class Solution {
//public:
//	bool isPowerOfFour(int num) {
//		if (num <= 0)
//			return false;
//		if ((num & num - 1) != 0) //判断是否为2的幂
//			return false;
//		if ((num & 0x55555555) == num)
//			return true;
//		return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s1;
//	cout << s1.isPowerOfFour(2) << endl;
//	return 0;
//}