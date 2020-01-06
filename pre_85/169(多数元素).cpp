//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*�ⷨ1�����������ҳ�ÿ�����ĸ���
//���ظ�������Ԫ��
//�˷�����ʱ
//*/
//class Solution1 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		int res;
//		for (auto i : nums) {
//			if (count(nums.begin(), nums.end(), i) >= (nums.size() + 1) / 2) {
//				res = i;
//				break;
//			}	
//		}
//		return res;
//	}
//};
//
///*�ⷨ2(�ٷ����)��������
//�±�Ϊnums.size()/2��һ��������
//*/
//class Solution2 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		return nums[nums.size() / 2];
//	}
//};
//
///*�ⷨ3(�ٷ����)��ͶƱ��*/
//class Solution3 {
//public:
//	int maiorityElement(vector<int>& nums) {
//		int count = 0,candidate;
//		for (auto i : nums) {
//			if (count == 0)
//				candidate = i;
//			count+=(i == candidate) ? 1 : -1;
//		}
//		return candidate;
//	}
//};
//
///*�ⷨ4�����η�
//���㶮
//*/
//
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	vector<int> nums = { 3,2,2 };
//	cout << s.maiorityElement(nums) << endl;
//	return 0;
//}