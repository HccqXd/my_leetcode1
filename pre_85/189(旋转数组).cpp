///*
//题目描述：
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//
//示例 1:
//
//输入: [1,2,3,4,5,6,7] 和 k = 3
//输出: [5,6,7,1,2,3,4]
//解释:
//向右旋转 1 步: [7,1,2,3,4,5,6]
//向右旋转 2 步: [6,7,1,2,3,4,5]
//向右旋转 3 步: [5,6,7,1,2,3,4]
//示例 2:
//
//输入: [-1,-100,3,99] 和 k = 2
//输出: [3,99,-1,-100]
//解释:
//向右旋转 1 步: [99,-1,-100,3]
//向右旋转 2 步: [3,99,-1,-100]
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1：添加一个额外数组res
//将原数组nums的第i个元素放在res的第(i+k)%(nums.size())上
//*/
//class Solution1 {
//public:
//	void rotate(vector<int>& nums, int k) {
//		vector<int> res(nums.size());
//		for (int i = 0; i < nums.size(); i++) {
//			res[(i + k) % (nums.size())] = nums[i];
//		}
//		nums.clear();
//		nums.insert(nums.end(), res.begin(), res.end());
//	}
//};
//
///*解法2(官方解答)：多次反转
//算法
//
//这个方法基于这个事实：当我们旋转数组 k 次，k%n 个尾部元素会被移动到头部，剩下的元素会被向后移动。
//在这个方法中，我们首先将所有元素反转。然后反转前 k 个元素，再反转后面 n-kn−k 个元素，就能得到想要的结果。
//假设 n=7 且 k=3 。
//
//原始数组                  : 1 2 3 4 5 6 7
//反转所有数字后             : 7 6 5 4 3 2 1
//反转前 k 个数字后          : 5 6 7 4 3 2 1
//反转后 n-k 个数字后        : 5 6 7 1 2 3 4 --> 结果
//*/
//class Solution2 {
//public:
//	void rotate(vector<int>& nums, int k) {
//		subreverse(nums, 0, nums.size() - 1);
//		subreverse(nums, 0, k%nums.size()-1);
//		subreverse(nums, k%nums.size(), nums.size() - 1);
//	}
//	void subreverse(vector<int>& nums, int start, int end) {
//		while (start < end) {
//			int temp = nums[start];
//			nums[start] = nums[end];
//			nums[end] = temp;
//			start++;
//			end--;
//		}
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	vector<int> vec = { 1,2,3,4,5,6,7 };
//	s.rotate(vec, 7);
//	for (auto i : vec)
//		cout << i << endl;
//	return 0;
//}
//
