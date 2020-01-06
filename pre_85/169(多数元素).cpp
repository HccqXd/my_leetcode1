//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*解法1：在数组中找出每个数的个数
//返回个数最多的元素
//此方法超时
//*/
//class Solution1 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		int res;
//		for (auto i : nums) {
//			if (count(nums.begin(), nums.end(), i) >= (nums.size() + 1) / 2) {
//				res = i;
//				break;
//			}	
//		}
//		return res;
//	}
//};
//
///*解法2(官方解答)：先排序
//下标为nums.size()/2的一定是众数
//*/
//class Solution2 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		return nums[nums.size() / 2];
//	}
//};
//
///*解法3(官方解答)：投票法*/
//class Solution3 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		int count = 0,candidate;
//		for (auto i : nums) {
//			if (count == 0)
//				candidate = i;
//			count+=(i == candidate) ? 1 : -1;
//		}
//		return candidate;
//	}
//};
//
///*解法4：分治法
//待搞懂
//*/
//
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 3,2,2 };
//	cout << s.maiorityElement(nums) << endl;
//	return 0;
//}