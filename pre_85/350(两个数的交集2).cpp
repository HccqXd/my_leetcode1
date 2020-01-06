///*
//��Ŀ������
//	�����������飬��дһ���������������ǵĽ�����
//
//ʾ�� 1:
//����: nums1 = [1,2,2,1], nums2 = [2,2]
//���: [2,2]
//
//ʾ�� 2:
//����: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//���: [4,9]
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*�ⷨ1:�������ٶ��ֲ���*/
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
///*�ⷨ2��˫ָ��*/
//class Solution2 {
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> res;
//		sort(nums1.begin(), nums1.end());	//��nums1����
//		sort(nums2.begin(), nums2.end());	//��nums2����
//		auto p1 = nums1.begin(), p2 = nums2.begin();	//����nums1��nums2�ĳ�ʼָ��
//		while (p1 != nums1.end() && p2 != nums2.end()) {	//��*p1==*p2ʱ�����Ԫ��һ���ǽ�����һ��Ԫ��
//			if (*p1 == *p2) {
//				res.push_back(*p1);
//				p1++;
//				p2++;
//			}
//			else if (*p1 < *p2) {	//��*p1<*p2,ʱ����nums1�����Ԫ�ؿ�����nums2��ǰλ��Ԫ����ȣ�����p1�ú���
//				p1++;
//			}
//			else if (*p1 > *p2) {	//ͬ��p2�ú���
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