//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*�ⷨһ��ѭ�����������ĸ�λ�õ������ڵ���Ŀ��������ֱ�ӷ��ش�����������
//Ҫע������Ϊ�պ�Ŀ�������������������*/
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
//		return nums.size();	//���Ŀ�����ȴ�������������󣬲������
//	}
//};
//
///*�ⷨ�������ֲ��ҷ�*/
//class Solution2 {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int left = 0;
//		int right = nums.size()-1;
//		int mid;
//		if (nums.size() == 0) //������Ϊ��
//			return 0;
//		while (left < right) {	//���ַ��ж�
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
//		if (target <= nums[left])	//���û�ҵ���������Ŀ����С�ڵ�����ߵ�������ʱleft==right�����ͷ��������������
//			return left;
//		return left + 1;	//���û�ҵ���������Ŀ����������ߵ�������ʱleft==right�����ͷ��������������+1
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