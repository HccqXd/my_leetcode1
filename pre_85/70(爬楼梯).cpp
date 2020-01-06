///********************************
//Copyright(c) 2019, Luocheng Liu
//All rights reserved.
//********************************/
//#include<iostream>
//#include<vector>
//using namespace std;
//
///*解法1：暴力解法（超时）*/
//class Solution1 {
//public:
//	int climbStairs(int n) {
//		return climb(0, n);
//	}
//	int climb(int i, int n) {
//		if (i > n)
//			return 0;
//		if (i == n)
//			return 1;
//		return climb(i + 1, n) + climb(i + 2, n);
//	}
//};
//
///*解法2（官方解答）：暴力解法优化(超时)*/
//class Solution2 {
//public:
//	int climbStairs(int n) {
//		vector<int> mem(n);	
//		return climb(0, n, mem);
//	}
//	int climb(int i, int n, vector<int> mem) {	//将每一层的结果保存在mem中，如果mem中有某一层结果，直接返回mem[i]
//		if (i > n)
//			return 0;
//		if (i == n)
//			return 1;
//		if (mem[i] > 0)
//			return mem[i];
//		mem[i] = climb(i + 1, n, mem) + climb(i + 2, n, mem);
//		return mem[i];
//	}
//};
//
///*解法3：动态规划
//到达n阶楼顶的方法种数是n-1阶的种数(在这基础上爬1个台阶) + n-2阶的种数(在这基础上爬2个台阶，如果选择1层1层上会与n-1的重合)
//*/
//class Solution3 {
//public:
//	int climbStairs(int n) {
//		vector<int> fb(n+1);
//		if (n == 1)	//当n就等于1时，如果不直接返回，则下面fb[2]会溢出
//			return 1;
//		fb[1] = 1;
//		fb[2] = 2;
//		for (int i = 3; i < n + 1; i++) {
//			fb[i] = fb[i - 1] + fb[i - 2];
//		}
//		return fb[n];
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution3 s3;
//	cout << s3.climbStairs(1) << endl;
//	return 0;
//}