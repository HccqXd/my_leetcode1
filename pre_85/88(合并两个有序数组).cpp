//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*�ⷨһ�����÷����㷨sort*/
//class Solution1 {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		for (int i = 0; i < n; i++)
//			nums1[m + i] = nums2[i];	//��nums1��mλ��ʼ���ε���nums2�е���
//		sort(nums1.begin(), nums1.end());	//sort��nums1����
//	}
//};
//
///*�ⷨ�����ٷ��ⷨ����˫ָ��/�Ӻ���ǰ*/
//class Solution2 {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//	    int ptr1 = m - 1, ptrend = m + n - 1, ptr2 = n - 1;
//		while (ptrend>=0) {
//			if(ptr2<0||ptr1>=0 && nums1[ptr1]>=nums2[ptr2]) {
//					nums1[ptrend] = nums1[ptr1];
//					--ptr1;
//			}
//			else {
//				nums1[ptrend] = nums2[ptr2];
//				--ptr2;
//			}
//			--ptrend;
//		}
//		
//	}
//};
//
//int main(int argc, char** argv) {
//	vector<int> nums1 = { 1,2,3,0,0,0 };
//	vector<int> nums2 = { 2,5,6 };
//	Solution2 s2;
//	s2.merge(nums1, 3, nums2, 3);
//	for (auto i : nums1)
//		cout << i << endl;
//	return 0;
//}