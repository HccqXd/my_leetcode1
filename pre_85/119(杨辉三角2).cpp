//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*�ⷨ1:����ʽչ����
//C(n,k)=n!/(k!(n-k)!)=C(n,k-1)*(n-k)/(k+1)
//*/
//class Solution1 {
//public:
//	vector<int> getRow(int rowIndex) {
//		vector<int> vec;
//		for (int k = 0; k < rowIndex + 1; k++) {
//			vec.push_back(combination(rowIndex, k));
//		}
//		return vec;
//	}
//	
//	int combination(int n, int k){
//		if (k == 0)
//			return 1;
//		int res =  long(combination(n, k - 1))*(n - k + 1) / k; //��ط�ûŪ����ΪʲôҪ��combination(n, k - 1)ǿ��ת����long��
//																//��Ϊ���ص�res��int���ͣ�����������������ҲӦ����long��
//		return res;
//	}
//};
//
///*�ⷨ2�����ñ��ˣ�����̬�滮
//
//*/
//class Solution2 {
//public:
//	vector<int> getRow(int rowIndex) {
//		vector<int> vec(rowIndex + 1);
//		for (int i = 0; i < rowIndex + 1; i++) {	//ģ��ÿ������ݣ�����i=3����ô��Ƕѭ���õ����������[1,3,3,1]
//			for (int j = i; j >= 0; j--) {	//��ǰ����������������
//				if (j == 0 || j == i)	//��1��Ԫ�غ����һ��Ԫ�ص�ֵ��Ϊ1
//					vec[j] = 1;
//				else {
//					vec[j] = vec[j] + vec[j - 1];	//���µ�ǰ������ݣ���ǰ��ĵ�i��������ǰһ��ĵ�i������+ǰһ��ĵ�i-1������
//				}
//			}
//		}
//		return vec;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s1;
//	vector<int> res = s1.getRow(4);
//	for (auto i : res)
//		cout << i << " ";
//	cout << endl;
//	return 0;
//}
