//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///* 解法一：使用两个指针*/
//class Solution1 {
//public:
//	int removeElement(vector<int>& nums,int val) {
//		if (nums.empty()) {
//			return 0;
//		}
//		vector<int>::iterator currptr=nums.begin();
//		vector<int>::iterator preptr = nums.begin();
//		if (nums[0] == val) {
//			++currptr;
//		}
//		while (currptr != nums.end()) {
//			if (*currptr == val) 
//				++currptr;
//			else {
//				*preptr = *currptr;
//				++preptr;
//				++currptr;
//			}
//		}
//		return preptr - nums.begin();
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> ivec = { 0,1,2,2,3,0,4,2};
//	int len = s1.removeElement(ivec,2);
//	cout << len << endl;
//	for (int i = 0; i != len; i++)
//		cout << ivec[i] << endl;
//}