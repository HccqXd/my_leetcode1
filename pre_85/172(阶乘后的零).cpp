//#include<iostream>
//
//using namespace std;
//
///*解法1(参考题解)：
//末尾几个0就表示有几个10相乘，
//也就表示因子可以拆成几对2和5，
//由于2的数量比5多，
//所以只要找出几个5即可
//*/
//class Solution1 {
//public:
//	int trainlingZeroes(int n) {
//		int sum = 0; 
//		while (n > 0) {
//			sum += n / 5;
//			n = n / 5;
//		}
//		return sum;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.trainlingZeroes(10) << endl;
//	return 0;
//}