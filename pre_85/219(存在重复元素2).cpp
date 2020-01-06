///*
//题目描述：
//	给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值最大为 k。
//
//示例 1:
//	输入: nums = [1,2,3,1], k = 3
//	输出: true
//
//示例 2:
//	输入: nums = [1,0,1,1], k = 1
//	输出: true
//
//示例 3:
//	输入: nums = [1,2,3,1,2,3], k = 2
//	输出: false
//*/
//#include<iostream>
//#include<vector>
//#include<map>
//
//using namespace std;
//
///*解法1:哈希表法
//建立一个空map，关键字为num[i]，map[num[i]]=i
//依次检查数组nums，如果当前位置的数值不在map中，将当前位置数值和索引插入map
//如果当前位置i的数值在map中，检查当前索引和map[num[i]]的差的绝对值是否小于等于k
//如果是，则返回true，否则将map[num[i]]=i,继续查找
//如果都不是，则返回false
//*/
//class Solution1 {
//public:
//	bool containsNearbyDuplicate(vector<int>& nums, int k) {
//		map<int, int> m;
//		for (int i = 0; i < nums.size(); i++) {
//			if (m.find(nums[i]) == m.end())
//				m.insert({ nums[i],i });
//			else {
//				if (i - m[nums[i]] <= k)
//					return true;
//				else
//					m[nums[i]] = i;
//			}
//		}
//		return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 1,2,3,1,2,3 };
//	cout << s.containsNearbyDuplicate(nums, 2) << endl;
//	return 0;
//}