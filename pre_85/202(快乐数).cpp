///*
//题目描述：
//	编写一个算法来判断一个数是不是“快乐数”。
//
//	一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到 1。如果可以变为 1，那么这个数就是快乐数。
//
//示例: 
//	输入: 19
//	输出: true
//
//解释:
//	1^2 + 9^2 = 82
//	8^2 + 2^2 = 68
//	6^2 + 8^2 = 100
//	1^2 + 0^2 + 0^2 = 1
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
///*解法1：
//当进入循环时，如果是1,1,1...则是快乐数
//否则不是快乐数。
//*/
//class Solution1 {
//public:
//	bool isHappy(int n) {
//		set<int> s;
//		while (s.find(n) == s.end()) {
//			s.insert(n);
//			int res = 0;
//			while (n != 0) {
//				res += (n % 10) *( n % 10);
//				n /= 10;
//			}
//			n = res;	
//		}
//		return n == 1;
//	}
//};
//
///*
//解法2(题解中答案)：快慢指针
//使用“快慢指针”思想找出循环：“快指针”每次走两步，“慢指针”每次走一步，当二者相等时，即为一个循环周期。
//此时，判断是不是因为1引起的循环，是的话就是快乐数，否则不是快乐数。
//*/
//class Solution2 {
//public:
//	int bitSquareSum(int n) {
//		int sum = 0;
//		while (n > 0) {
//			int bit = n % 10;
//			sum += bit*bit;
//			n = n / 10;
//		}
//		return sum;
//	}
//	bool isHappy(int n) {
//		int slow = n, fast = n;
//		do{
//			slow = bitSquareSum(slow);
//			fast = bitSquareSum(fast);
//			fast = bitSquareSum(fast);
//		} while (slow != fast);
//		return slow == 1;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	cout << s.isHappy(19) << endl;
//	return 0;
//}
