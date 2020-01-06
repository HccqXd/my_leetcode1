///*
//题目描述：
//给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
//设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。
//注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。
//
//示例：
//输入: [7,1,5,3,6,4]
//输出: 7
//解释: 在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5-1 = 4 。
//     随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6-3 = 3 。
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////这题我没有想出来任何一种方法，以下全是官方的解法
//
///*解法1：暴力解法
//虽说是暴力解法，但是并不容易直接想出来
//提交也超时，但是其中的思想还是值得深究的
//这种思想里面包含两层筛选，比如数组[7,1,5,3,6,4],
//首先我们固定7,1组合，然后在[5,3,6,4]的各种组合结果中找出最大的结果，
//再固定7,5组合，然后在[1,3,6,4]的各种组合结果中找出最大的结果
//以此类推....
//这些是第一层筛选，
//第2层筛选，是在上面的各种最大结果中找出最大值，最终的值被赋予返回结果
//*/
//class Solution1 {
//public:
//	int maxProfit(vector<int>& prices) {
//		return max(prices, 0);
//	}
//	int max(vector<int>& prices, int s) {
//		if (s >= prices.size())	//递归出口
//			return 0;
//		int res = 0;
//		for (int i = s; i < prices.size() - 1; i++) {
//			int maxprofit = 0;
//			for (int j = i + 1; j < prices.size(); j++) {
//				if (prices[i] < prices[j]) {
//					int profit = prices[j] - prices[i] + max(prices, j + 1);
//					if (profit > maxprofit)	//第1层筛选
//						maxprofit = profit;
//				}
//			}
//			if (maxprofit > res)	//第2层筛选
//				res = maxprofit;
//		}
//		return res;
//	}
//};
//
///*解法2：贪心算法
//我们将每天当做既买进又卖出(虽然题中明确告诉不能同时参与多笔交易，但是结果是允许的，可以自己模拟)，比如数组[7,1,3,5,6,4],
//第1天买进7，第2天卖出1，因为1-7<0，我们舍弃这种方案，
//第2天买进1，第3天卖出3，因为3-1>0,我们加上这个结果，
//第3天买进3，第4天卖出5，因为5-3>0,我们加上这个结果，
//第4天买进5，第5天卖出6，因为6-5>0,我们加上这个结果，
//第5天买进6，第6天卖出4，因为4-6>0,我们舍弃这种方案
//最后结果=(3-1)+(5-3)+(6-5)=5
//*/
//class Solution2 {
//public:
//	int maxProfit(vector<int>& prices) {
//		if (prices.size()<2)
//			return 0;
//		int max=0;
//		for (int i = 1; i < prices.size(); i++) {
//			if (prices[i] - prices[i-1] > 0) {
//				max += prices[i] - prices[i - 1];
//			}
//		}
//		return max;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	vector<int> vec = { 7,1,5,3,6,4 };
//	cout << s.maxProfit(vec) << endl;
//	return 0;
//}