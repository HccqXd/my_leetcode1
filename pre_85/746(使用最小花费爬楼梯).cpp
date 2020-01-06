///*
//题目描述：
//	数组的每个索引做为一个阶梯，第 i个阶梯对应着一个非负数的体力花费值 cost[i](索引从0开始)。
//	每当你爬上一个阶梯你都要花费对应的体力花费值，然后你可以选择继续爬一个阶梯或者爬两个阶梯。
//	您需要找到达到楼层顶部的最低花费。在开始时，你可以选择从索引为 0 或 1 的元素作为初始阶梯。
//
//示例 1:
//	输入: cost = [10, 15, 20]
//	输出: 15
//	解释: 最低花费是从cost[1]开始，然后走两步即可到阶梯顶，一共花费15。
//
//示例 2:
//	 输入: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
//	 输出: 6
//	 解释: 最低花费方式是从cost[0]开始，逐个经过那些1，跳过cost[3]，一共花费6。
//
//注意：
//	 cost 的长度将会在 [2, 1000]。
//	 每一个 cost[i] 将会是一个Integer类型，范围为 [0, 999]。
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*解法1：动态规划
//想法来自70题(爬楼梯)*/
//class Solution1 {
//public:
//	int minCostClimbingStairs(vector<int>& cost) {
//		int cost_len = cost.size();
//		vector<int> dp(cost_len);
//		dp[0] = cost[0];
//		dp[1] = cost[1];
//		for (int i = 2; i < cost_len; i++) {	//dp[i]表示必须经过第i层楼梯所花费最小体力
//			dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
//		}
//		return min(dp[cost_len-1], dp[cost_len - 2]);	
//	}
//};
//
//int main(int argc, char** argv) {
//	vector<int> cost = { 1,100,1,1,1,100,1,1,100,1 };
//	Solution1 s;
//	cout << s.minCostClimbingStairs(cost) << endl;
//	return 0;
//}