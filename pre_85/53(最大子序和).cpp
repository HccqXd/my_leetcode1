//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*解法一：贪心法。整数增益*/
//class Solution1 {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int sum = 0, result=nums[0];
//		for (auto i : nums) {
//			if (sum > 0) {
//				sum +=i;
//			}
//			else {
//				sum = i;
//			}
//			result = max(result, sum);
//		}
//		return result;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//	int result = s1.maxSubArray(nums);
//	cout << result << endl;
//	return 0;
//}