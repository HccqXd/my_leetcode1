///*
//��Ŀ������
//	ͳ������С�ڷǸ����� n ��������������
//
//ʾ��:
//	����: 10
//	���: 4
//	����: С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��
//*/
//#include<iostream>
//
//using namespace std;
//
///*�ⷨ1������ⷨ*/
//class Solution1 {
//public:
//	int countPrimes(int n) {
//		int res = 0;
//		for (int i = 2; i < n; i++) {
//			if (isPrime(i))
//				res++;
//		}
//		return res;
//	}
//	bool isPrime(int n) {
//		for (int i = 2; i * i < n; i++) { 
//			if (n%i == 0)
//				return false;
//		}
//		return true;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.countPrimes(10) << endl;
//	return 0;
//}