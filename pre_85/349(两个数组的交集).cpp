///*
//题目描述：
//	给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//	输入: nums1 = [1,2,2,1], nums2 = [2,2]
//	输出: [2]
//
//示例 2:
//	输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//	输出: [9,4]
//
//说明:
//	输出结果中的每个元素一定是唯一的。
//	我们可以不考虑输出结果的顺序。
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1：常规
//定义一个vector容器res,
//依次检查nums2中每个元素是否在nums1中，如果在，再看看res中有没有此元素，没有，则加入res中,
//最后返回res
//*/
//class Solution1 {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> res;
//		for (int i = 0; i < nums2.size(); i++) {
//			if (find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()) {
//				if (find(res.begin(),res.end(),nums2[i])==res.end()) {
//					res.push_back(nums2[i]);
//				}
//			}
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	vector<int> nums1 = { 4,9,5 };
//	vector<int> nums2 = { 9,4,9,8,4 };
//	Solution1 s;
//	vector<int> res = s.intersection(nums1, nums2);
//	for (auto i : res)
//		cout << i << endl;
//	return 0;
//}