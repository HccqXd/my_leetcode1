///*
//��Ŀ������
//	�����������飬��дһ���������������ǵĽ�����
//
//ʾ�� 1:
//	����: nums1 = [1,2,2,1], nums2 = [2,2]
//	���: [2]
//
//ʾ�� 2:
//	����: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//	���: [9,4]
//
//˵��:
//	�������е�ÿ��Ԫ��һ����Ψһ�ġ�
//	���ǿ��Բ�������������˳��
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*�ⷨ1������
//����һ��vector����res,
//���μ��nums2��ÿ��Ԫ���Ƿ���nums1�У�����ڣ��ٿ���res����û�д�Ԫ�أ�û�У������res��,
//��󷵻�res
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