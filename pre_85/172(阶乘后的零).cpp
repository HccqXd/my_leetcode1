//#include<iostream>
//
//using namespace std;
//
///*�ⷨ1(�ο����)��
//ĩβ����0�ͱ�ʾ�м���10��ˣ�
//Ҳ�ͱ�ʾ���ӿ��Բ�ɼ���2��5��
//����2��������5�࣬
//����ֻҪ�ҳ�����5����
//*/
//class Solution1 {
//public:
//	int trainlingZeroes(int n) {
//		int sum = 0; 
//		while (n > 0) {
//			sum += n / 5;
//			n = n / 5;
//		}
//		return sum;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.trainlingZeroes(10) << endl;
//	return 0;
//}