//#include<iostream>
//
//using namespace std;
//
////��Ľⷨûʲô��ͷ��λ���㻹����
//
///*�ⷨ�������
//4�Ĵη���һ����2�Ĵη�������2�Ĵη�����һ����4�Ĵη�����ͨ��4�Ĵη��������ƿ��Է���4�Ĵη�����������1ֻ����������λ��
//��˿���ͨ��������λ����1��ż��Ϊ����0������1010101010101010101010101010101�����������㣬�����Ϊԭ������
//
//���ߣ�MisterBooo
//���ӣ�https ://leetcode-cn.com/problems/power-of-four/solution/e-you-shi-yi-dao-zhuang-bi-jie-fa-de-suan-fa-ti-2/
//��Դ�����ۣ�LeetCode��
//*/
//class Solution {
//public:
//	bool isPowerOfFour(int num) {
//		if (num <= 0)
//			return false;
//		if ((num & num - 1) != 0) //�ж��Ƿ�Ϊ2����
//			return false;
//		if ((num & 0x55555555) == num)
//			return true;
//		return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s1;
//	cout << s1.isPowerOfFour(2) << endl;
//	return 0;
//}