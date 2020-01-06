//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Solution1 {
//public:
//	int strStr(string haystack, string needle) {
//		if (haystack == ""&&needle == "")
//			return 0;
//		if (haystack.size() < needle.size())
//			return -1;
//		if (haystack.size() == needle.size()) {
//			if (haystack == needle)
//				return 0;
//			else
//				return -1;
//		}
//		for (int i = 0; i != haystack.size() - needle.size()+1; i++) {
//			if (haystack.substr(i, needle.size()) == needle)
//				return i;
//		}
//		return -1;
//	}
//};
//
///*方法二：希望能用KMP算法*/
//class Solution2 {
//
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	//string haystack = "hello", needle = "ll";
//	string haystack = "aaaaa", needle = "bba";
//	cout << s1.strStr(haystack, needle) << endl;
//	return 0;
//}