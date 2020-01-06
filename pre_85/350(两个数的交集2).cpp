///*
//题目描述：
//	给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//输入: nums1 = [1,2,2,1], nums2 = [2,2]
//输出: [2,2]
//
//示例 2:
//输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出: [4,9]
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*解法1:先排序，再二分查找*/
////class Solution1 {
////public:
////	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
////		vector<int> res;
////		vector<int> long_vec = (nums1.size() >= nums2.size()) ? nums1 : nums2;
////		vector<int> short_vec = (nums1.size() >= nums2.size()) ? nums2 : nums1;
////		sort(long_vec.begin(), long_vec.end());
////		for (auto i : short_vec) {
////			if (bi_search(long_vec, i))
////				res.push_back(i);
////		}
////		return res;
////		
////	}
////	bool bi_search(vector<int>& nums, int i) {
////		int left = 0, right = nums.size()-1;
////		int mid;
////		while (left < right) {
////			mid = left + (right - left) / 2;
////			if (nums[mid] == i)
////				return true;
////			if (nums[mid] < i)
////				left = mid + 1;
////			if (nums[mid] > i)
////				right = mid - 1;
////
////		}
////		if (nums[left] != i)
////			return false;
////		else
////			return true;
////	}
////};
//
///*解法2：双指针*/
//class Solution2 {
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> res;
//		sort(nums1.begin(), nums1.end());	//将nums1排序
//		sort(nums2.begin(), nums2.end());	//将nums2排序
//		auto p1 = nums1.begin(), p2 = nums2.begin();	//定义nums1和nums2的初始指针
//		while (p1 != nums1.end() && p2 != nums2.end()) {	//当*p1==*p2时，这个元素一定是交集中一个元素
//			if (*p1 == *p2) {
//				res.push_back(*p1);
//				p1++;
//				p2++;
//			}
//			else if (*p1 < *p2) {	//当*p1<*p2,时，则nums1后面的元素可能与nums2当前位置元素相等，所以p1得后移
//				p1++;
//			}
//			else if (*p1 > *p2) {	//同理，p2得后移
//				p2++;
//			}
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	vector<int> nums1 = { 4,9,5 };
//	vector<int> nums2 = { 9,4,9,8,4 };
//	vector<int> res = s.intersect(nums1, nums2);
//	for (auto i : res)
//		cout << i << endl;
//	return 0;
//}