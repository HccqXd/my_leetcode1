//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution1 {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		auto currPtr = digits.end() - 1;	//���һλ����
//		int flag = 1;	//��ʼʱֻ�Ǳ�ʾĩβ���ּ�1������λ��ʾ�Ƿ��λ
//		while (currPtr != digits.begin()) {
//			*currPtr += flag;
//			flag = *currPtr > 9;	//�����1���λʱ����λ������9����λ��ʶ��flagΪ�棨1��
//			*currPtr %= 10;	//����1����9�����λΪ0�����������λ������
//			--currPtr;
//		}
//
//		/*���洦�������׶�����*/
//		*currPtr += flag;
//		flag = *currPtr > 9;
//		*currPtr %= 10;
//		if (flag)	//���׶����ֽ�λ����9�������׶˲���1
//			digits.insert(digits.begin(), 1);	
//		return digits;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> digits = { 9,9,9 };
//	s1.plusOne(digits);
//	for (auto i : digits)
//		cout << i << " ";
//	cout << endl;
//	return 0;
//}