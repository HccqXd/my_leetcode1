//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<numeric>
//
//using namespace std;
//
///*�ⷨ1������STL�㷨count,
//һ�α���������ÿ��Ԫ�صĸ�����
//����Ϊ1��Ϊ����*/
//class Solution1 {
//public:
//	int singleNumber(vector<int>& nums) {
//		int j;	
//		for (int i = 0; i < nums.size(); i++) {
//			if (count(nums.begin(), nums.end(), nums[i]) == 1) { //���ֱ����������أ���leetcode�ϻ����
//				j = i;
//				break;
//			}
//		}
//		return nums[j];
//	}
//};
//
///*�ⷨ2����ϣ��
//����set��nums�е�һ�γ������ּ���set�����ĳ��������set�У���ɾ��set�д�����
//Ч�������룬Ӧ���ǹ�ϣ��Ĳ�������*/
//class Solution2 {
//public:
//	int singleNumber(vector<int>& nums) {
//		set<int> s;
//		for (int i = 0; i < nums.size(); i++) {
//			if (s.find(nums[i]) == s.end())
//				s.insert(nums[i]);
//			else
//				s.erase(nums[i]);
//		}
//		return *s.begin();
//	}
//};
//
///*�ⷨ3���ٷ���𣩣���ѧ
//2*(a+b+c)-(a+a+b+b+c)=c
//Ч���������룬��Ҫ�Ǽ�����set�Ϳ�������
//*/
//class Solution3 {
//public:
//	int singleNumber(vector<int>& nums) {
//		set<int> s;
//		s.insert(nums.begin(), nums.end());
//		return 2 * accumulate(s.cbegin(), s.cend(),0) - accumulate(nums.cbegin(), nums.cend(),0);
//	}
//};
//
///*�ⷨ4���ٷ���𣩣��������
//	(1)a^0=a
//	(2)a^a=0
//	(3)���㽻���ɺͽ����(������ؼ�)��a^b^a=(a^a)^b=0^b=b
//*/
//class Solution4 {
//public:
//	int singleNumber(vector<int>& nums) {
//		int a = 0;
//		for (auto i : nums)
//			a ^= i;
//		return a;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	vector<int> nums = { 2,2,1 };
//	cout << s.singleNumber(nums) << endl;
//	return 0;
//}
//
