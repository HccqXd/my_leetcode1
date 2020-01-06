//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法一：循环搜索，看哪个位置的数大于等于目标数，则直接返回此数的索引，
//要注意数组为空和目标数比数组最大数还大*/
//
//class Solution1 {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		if (nums.size() == 0)
//			return 0;
//		for (int i = 0; i != nums.size(); i++) {
//			if (nums[i] >= target)
//				return i;
//		}
//		return nums.size();	//如果目标数比此数组最大数还大，插在最后
//	}
//};
//
///*解法二：二分查找法*/
//class Solution2 {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int left = 0;
//		int right = nums.size()-1;
//		int mid;
//		if (nums.size() == 0) //当数组为空
//			return 0;
//		while (left < right) {	//二分法判断
//			mid = left + (right - left) / 2;
//			if (target < nums[mid]) {
//				right = mid - 1;
//			}
//			if (target > nums[mid]) {
//				left = mid + 1;
//			}
//			if (target == nums[mid]) {
//				return mid;
//			}
//		}
//		if (target <= nums[left])	//如果没找到，且最终目标数小于等于左边的数（此时left==right），就返回左边数的索引
//			return left;
//		return left + 1;	//如果没找到，且最终目标数大于左边的数（此时left==right），就返回左边数的索引+1
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s2;
//	vector<int> nums;
//	int target = 5;
//	int result = s2.searchInsert(nums, 5);
//	cout << result << endl;
//	return 0;
//}