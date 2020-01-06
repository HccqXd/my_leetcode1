///********************************
//Copyright(c) 2019, Luocheng Liu
//All rights reserved.
//********************************/
//#include<iostream>
//#include<vector>
//using namespace std;
//
///*�ⷨ1�������ⷨ����ʱ��*/
//class Solution1 {
//public:
//	int climbStairs(int n) {
//		return climb(0, n);
//	}
//	int climb(int i, int n) {
//		if (i > n)
//			return 0;
//		if (i == n)
//			return 1;
//		return climb(i + 1, n) + climb(i + 2, n);
//	}
//};
//
///*�ⷨ2���ٷ���𣩣������ⷨ�Ż�(��ʱ)*/
//class Solution2 {
//public:
//	int climbStairs(int n) {
//		vector<int> mem(n);	
//		return climb(0, n, mem);
//	}
//	int climb(int i, int n, vector<int> mem) {	//��ÿһ��Ľ��������mem�У����mem����ĳһ������ֱ�ӷ���mem[i]
//		if (i > n)
//			return 0;
//		if (i == n)
//			return 1;
//		if (mem[i] > 0)
//			return mem[i];
//		mem[i] = climb(i + 1, n, mem) + climb(i + 2, n, mem);
//		return mem[i];
//	}
//};
//
///*�ⷨ3����̬�滮
//����n��¥���ķ���������n-1�׵�����(�����������1��̨��) + n-2�׵�����(�����������2��̨�ף����ѡ��1��1���ϻ���n-1���غ�)
//*/
//class Solution3 {
//public:
//	int climbStairs(int n) {
//		vector<int> fb(n+1);
//		if (n == 1)	//��n�͵���1ʱ�������ֱ�ӷ��أ�������fb[2]�����
//			return 1;
//		fb[1] = 1;
//		fb[2] = 2;
//		for (int i = 3; i < n + 1; i++) {
//			fb[i] = fb[i - 1] + fb[i - 2];
//		}
//		return fb[n];
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution3 s3;
//	cout << s3.climbStairs(1) << endl;
//	return 0;
//}