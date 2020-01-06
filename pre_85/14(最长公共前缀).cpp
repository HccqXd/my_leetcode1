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
//		for (int i = 1; i <= strs[0].size(); i++) { //以第一个字符串为基准，设公共前缀为第一个字符串前i个子字符串
//			result = strs[0].substr(0, i);	
//			for (int j = 1; j != strs.size(); j++) { //依次和其他字符串的前i个子字符串相比
//				if (strs[j].substr(0, i) != strs[0].substr(0,i)) {	//碰到和其他字符串的前i个子字符串不相等
//					if (i == 1) //如果前1个子字符串就不相等，立即返回空前缀
//						return "";
//					else { //否则返回，前i-1个子字符串
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