//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//class Solution1 {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		if (strs.size() == 0)
//			return "";
//		string result;
//		for (int i = 1; i <= strs[0].size(); i++) { //�Ե�һ���ַ���Ϊ��׼���蹫��ǰ׺Ϊ��һ���ַ���ǰi�����ַ���
//			result = strs[0].substr(0, i);	
//			for (int j = 1; j != strs.size(); j++) { //���κ������ַ�����ǰi�����ַ������
//				if (strs[j].substr(0, i) != strs[0].substr(0,i)) {	//�����������ַ�����ǰi�����ַ��������
//					if (i == 1) //���ǰ1�����ַ����Ͳ���ȣ��������ؿ�ǰ׺
//						return "";
//					else { //���򷵻أ�ǰi-1�����ַ���
//						result = strs[0].substr(0, i - 1);
//						return result;
//					}			
//				}
//			}
//		}
//		return result;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	//vector<string> strs = { "flower","flow","flight" };
//	//vector<string> strs = { "dog","race","car" };
//	vector<string> strs = { "flower","flow","flo" };
//	//vector<string> strs = { "flo","flower","flow" };
//	string result = s1.longestCommonPrefix(strs);
//	cout << result << endl;
//	return 0;
//}