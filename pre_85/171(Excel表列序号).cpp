///*
//��Ŀ������
//����һ��Excel����е������ƣ���������Ӧ������š�
//
//���磬
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...
//
//ʾ�� 1:
//
//����: "A"
//���: 1
//ʾ�� 2:
//
//����: "AB"
//���: 28
//ʾ�� 3:
//
//����: "ZY"
//���: 701
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
///*�ⷨ1:26����ת10���ƣ�ע���λ����1��ʼ
//˼������168��(Excel��������)
//*/
//
//class Solution {
//public:
//	int titleToNumber(string s) {
//		int res = 0;
//		long flag = 1;
//		for (int i = s.size() - 1; i >= 0; i--) {
//			res += (s[i] - 'A' + 1)*flag;
//			flag *= 26;
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s;
//	cout << s.titleToNumber("ZY") << endl;
//	return 0;
//}