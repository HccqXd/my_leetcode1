///*
//题目描述：
//你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
//
//给定一个代表每个房屋存放金额的非负整数数组，计算你在不触动警报装置的情况下，能够偷窃到的最高金额。
//
//	示例 1:
//
//	 输入: [1,2,3,1]
//	 输出: 4
//	 解释: 偷窃 1 号房屋 (金额 = 1) ，然后偷窃 3 号房屋 (金额 = 3)。
//     偷窃到的最高金额 = 1 + 3 = 4 。
//	示例 2:
//
//	 输入: [2,7,9,3,1]
//	 输出: 12
//	 解释: 偷窃 1 号房屋 (金额 = 2), 偷窃 3 号房屋 (金额 = 9)，接着偷窃 5 号房屋 (金额 = 1)。
//	      偷窃到的最高金额 = 2 + 9 + 1 = 12 。
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
////以下几种解法都来自题解
///*解法1：递归解法
//对于第n家，我们可以选择偷还是不偷，选择偷的话，就不能+前n-1家偷的最多的钱，只能+前n-2家偷得最多的钱
//所以这要看(前n-1家偷的最多的钱)和(前n-2家偷的最多的钱+第n家的钱)中的最大值
//但是这种方法会超出时间限制
//*/
//class Solution1 {
//public:
//	int rob(vector<int>& nums) {
//		return robHelper(nums, nums.size());
//	}
//	int robHelper(vector<int>& nums, int n) {
//		if (n == 0)
//			return 0;
//		if (n == 1)
//			return nums[0];
//		return max(robHelper(nums, n - 2) + nums[n - 1], robHelper(nums, n - 1));
//	}
//};
//
///*解法2：递归优化
//递归过程中会存在大量的重复运算，我们可以用一个数组来保存结果，如果数组有值，则直接返回此值即可
//*/
//class Solution2 {
//public:
//	int rob(vector<int>& nums) {
//		vector<int> temp(nums.size() + 1, -1);
//		return robHelper(nums, nums.size(), temp);
//	}
//	int robHelper(vector<int>& nums, int n, vector<int>& temp) {
//		if (n == 0)
//			return 0;
//		if (n == 1)
//			return nums[0];
//		if (temp[n] != -1)
//			return temp[n];
//		int res = max(robHelper(nums, n - 2, temp) + nums[n - 1], robHelper(nums, n - 1, temp));
//		temp[n] = res;
//		return res;
//	}
//};
//
///*解法3(官方解答):动态规划
//思想还是和递归差不多
//*/
//class Solution3 {
//public:
//	int rob(vector<int>& nums) {
//		int currMax = 0;
//		int preMax = 0;
//		for (auto i : nums) {
//			int temp = currMax;
//			currMax = max(preMax + i, currMax);
//			preMax = temp;
//		}
//		return currMax;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution3 s;
//	vector<int> vec = {2,7,9,3,1};
//	cout << s.rob(vec) << endl;
//	return 0;
//	
//}