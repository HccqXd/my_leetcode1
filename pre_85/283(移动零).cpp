///*
//��Ŀ������
//	����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//
//ʾ��:
//	����: [0,1,0,3,12]
//	���: [1,3,12,0,0]
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*�ⷨ1��˫ָ�뷨
//curr��ʾ��ǰָ��
//last��ʾ�Ѿ�����õķ�0ָ��
//*/
//class Solution1 {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int curr = 0, last = 0;
//		for (; curr < nums.size(); curr++) {
//			if (nums[curr] != 0) {
//				nums[last] = nums[curr];
//				last++;
//			}
//		}
//		for (; last < nums.size(); last++)
//			nums[last] = 0;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 0,1,0,3,12 };
//	s.moveZeroes(nums);
//	for (auto i : nums)
//		cout << i << endl;
//	return 0;
//}
