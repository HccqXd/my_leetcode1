//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///* �ⷨһ��ʹ������ָ��*/
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
///*�ⷨ����ʹ�÷����㷨unique
//unique����ֵ��һ������������ָ�����ȥ�غ������в��ظ����е����һ��Ԫ�ص���һ��Ԫ��
//ʹ��unique���뽫�������򣬱����Ѿ����ź����
//*/
//class Solution2 {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		auto iter = unique(nums.begin(), nums.end());      //�����������Ѳ��ظ���Ԫ���Ƶ�ǰ�棬�Ǹ��ǣ������ǽ���
//		nums.erase(iter, nums.end());    //ɾ���ظ�Ԫ��
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