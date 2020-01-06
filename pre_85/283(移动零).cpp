///*
//题目描述：
//	给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
//示例:
//	输入: [0,1,0,3,12]
//	输出: [1,3,12,0,0]
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1：双指针法
//curr表示当前指针
//last表示已经处理好的非0指针
//*/
//class Solution1 {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int curr = 0, last = 0;
//		for (; curr < nums.size(); curr++) {
//			if (nums[curr] != 0) {
//				nums[last] = nums[curr];
//				last++;
//			}
//		}
//		for (; last < nums.size(); last++)
//			nums[last] = 0;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 0,1,0,3,12 };
//	s.moveZeroes(nums);
//	for (auto i : nums)
//		cout << i << endl;
//	return 0;
//}
