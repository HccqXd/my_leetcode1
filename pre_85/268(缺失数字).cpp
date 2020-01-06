///*
//题目描述：
//	给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数。
//
//示例 1:
//	输入: [3,0,1]
//	输出: 2
//
//示例 2:
//	输入: [9,6,4,2,3,5,7,0,1]
//	输出: 8
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1：申请一个长度为nums.size()+1的数组res
//遍历数组nums，nums[i]=res[nums[i]]
//在遍历数组res，看res[i]是否等于i，不是则返回i
//*/
//class Solution1 {
//public:
//	int missingNumber(vector<int>& nums) {
//		vector<int> res(nums.size() + 1, -1);
//		for (int i = 0; i < nums.size(); i++) {
//			res[nums[i]] = nums[i];
//		}
//		for (int i = 0; i < res.size(); i++) {
//			if (res[i] != i)
//				return i;
//		}
//		return -1;
//	}
//};
//
///*解法2(官方解答)：位运算
//*/
//
///*解法3(官方解答)：高斯求和*/
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 3,0,1 };
//	cout << s.missingNumber(nums) << endl;
//	return 0;
//}