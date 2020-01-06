//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///* 解法一：使用两个指针*/
//class Solution1 {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.empty()) {
//			return 0;
//		}
//		vector<int>::iterator currptr=nums.begin();
//		vector<int>::iterator preptr = nums.begin();
//		while (currptr != nums.end()) {
//			if (*currptr == *preptr) 
//				++currptr;
//			else {
//				++preptr;
//				*preptr = *currptr;
//				++currptr;
//			}
//		}
//		return preptr - nums.begin()+1;
//	}
//};
//
///*解法二：使用泛型算法unique
//unique返回值是一个迭代器，它指向的是去重后容器中不重复序列的最后一个元素的下一个元素
//使用unique必须将数组排序，本题已经是排好序的
//*/
//class Solution2 {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		auto iter = unique(nums.begin(), nums.end());      //重排容器，把不重复的元素移到前面，是覆盖，而不是交换
//		nums.erase(iter, nums.end());    //删除重复元素
//		return nums.size();
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> ivec = { 0,0,1,1,1,2,2,3,3,4 };
//	int len = s1.removeDuplicates(ivec);
//	cout << len << endl;
//	for (int i = 0; i != len; i++)
//		cout << ivec[i] << endl;
//}