///*
//��Ŀ������
//	��һ�������������е��������飬ת��Ϊһ�ø߶�ƽ�������������
//	�����У�һ���߶�ƽ���������ָһ��������ÿ���ڵ� ���������������ĸ߶Ȳ�ľ���ֵ������ 1��
//
//ʾ��:
//	������������: [-10,-3,0,5,9],
//	һ�����ܵĴ��ǣ�[0,-3,9,-10,null,5]�������Ա�ʾ��������߶�ƽ�������������
//	 0
//	/ \
//  -3   9
//  /   /
//-10  5
//*/
//#include"BTree.h"
//#include<vector>
//#include<stack>
//
//using namespace std;
//
///*�ⷨ1���ݹ�
//��������:[-10,-3,0,5,9]
//����ȡ�е�0��Ϊ���ڵ㣬[-10,-3]��Ϊ�������ڵ�,[5,9]��Ϊ�������ڵ�
//��������������[-10,-3],������ȡ���е�-3��Ϊ���������ڵ㣬-10��Ϊ���������������ڵ�
//��������������[5,9],����ȡ���е�9��Ϊ���������ڵ㣬5��Ϊ���������������ڵ�
//*/
//class Solution1 {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		if (nums.empty())
//			return nullptr;
//		if (nums.size() == 1)
//			return new TreeNode(nums[0]);
//
//		int mid = nums.size() / 2;
//		TreeNode* node = new TreeNode(nums[mid]);
//		
//		vector<int> nums_l(nums.begin(), nums.begin() + mid);
//		node->left = sortedArrayToBST(nums_l);
//
//		vector<int> nums_r(nums.begin() + mid + 1, nums.end());
//		node->right = sortedArrayToBST(nums_r);
//		
//		return node;
//	}
//};
//
///*�ⷨ2:����
//����
//*/
//class Solution2 {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		if (nums.empty())
//			return nullptr;
//		if (nums.size() == 1)
//			return new TreeNode(nums[0]);
//	}
//};
//
//int main(int argc, char** argv) {
//		Solution1 s;
//		vector<int> nums = {-10,-3,0,5,9};
//		
//		TreeNode* node = s.sortedArrayToBST(nums);
//		printBT(node);
//		destroyBT(node);
//		return 0;
//}