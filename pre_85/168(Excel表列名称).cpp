///*
//��Ŀ������
//����һ������������������ Excel �������Ӧ�������ơ�
//���磬
//1 -> A
//2 -> B
//3 -> C
//...
//26 -> Z
//27 -> AA
//28 -> AB
//...
//ʾ����
//ʾ�� 1:
//
//����: 1
//���: "A"
//ʾ�� 2:
//
//����: 28
//���: "AB"
//ʾ�� 3:
//
//����: 701
//���: "ZY"
//*/
//
////����û����������˹ٷ����
//
//#include<iostream>
//#include<string>
//
//using namespace std;
///*�ⷨ1:26����ת��
//ע�⣬�����Ǵ�1��ʼ�������Ǵ�0��ʼ
//*/
//class Solution {
//public:
//	string convertToTitle(int n) {
//		string res="";
//		while (n > 0) {
//			int c = n % 26;
//			if (c == 0) { //��Ϊ�����1��ʼ
//				c = 26;
//				n -= 1;
//			}
//			res = (char)('A' + c - 1) + res;
//			n /= 26;
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s;
//	cout << s.convertToTitle(27) << endl;
//	return 0;
//}