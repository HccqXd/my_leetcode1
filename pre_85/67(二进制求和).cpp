//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Solution1 {
//public:
//	string addBinary(string a, string b) {
//		if (a.size() < b.size())	//����ַ���a����С��b�ĳ��ȣ��򽻻�a,b�����������Ƿ���a
//			a.swap(b);
//		char bc;	//�����ַ���bĳλ��ֵ
//		auto aPtr = a.rbegin(), bPtr = b.rbegin();	//��������
//		while(aPtr!=a.rend()) {
//			if (bPtr == b.rend())	//���ַ���b��ǰλ��û���ַ�������b�ĵ�ǰ�ַ�Ϊ'0'
//				bc = '0';
//			else {
//				bc = *bPtr;
//				++bPtr;
//			}
//				
//			*aPtr = *aPtr - '0' + bc;	//�ַ���a���ַ���b��Ӧλ��ֱ�����
//			if (*aPtr >= '2' && (aPtr+1 != a.rend())) {	//���ַ���a��ǰλ���ַ���'2'��ִ�н�λ����
//					*aPtr = (*aPtr - '0') % 2 + '0';	//�ַ���a��ǰλ���ַ�����'2',������λ�ַ�Ϊ'0'������'3'��������λΪ'1',
//					*(aPtr + 1) = *(aPtr + 1) + 1;		//��λ���������ַ���a��ǰλ��ǰһλ�ַ���1
//			}
//			++aPtr;
//		}
//		if (*(aPtr-1) >= '2') {	//���ַ���a���ַ����в���
//			*(aPtr-1) = (*(aPtr-1) - '0') % 2 + '0';
//			a = '1' + a;
//		}
//		return a;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	string a = "1010", b = "1011";
//	cout << s1.addBinary(a, b) << endl;
//	return 0;
//}