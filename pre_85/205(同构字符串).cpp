///*
//题目描述：
//	给定两个字符串 s 和 t，判断它们是否是同构的。
//	如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。
//	所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。两个字符不能映射到同一个字符上，但字符可以映射自己本身。
//
//示例 1:
//	输入: s = "egg", t = "add"
//	输出: true
//
//示例 2:
//	输入: s = "foo", t = "bar"
//	输出: false
//
//示例 3:
//	输入: s = "paper", t = "title"
//	输出: true
//
//说明:
//	你可以假设 s 和 t 具有相同的长度。
//*/
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
///*解法1：哈希表法
//从s和t首字符开始，
//如果map<char,char>没有找到当前位置s上的字符，则把两个字符串当前位置上的字符添加到map
//如果map<char,char>有当前位置s上的字符，则看map中的第二个值是不是当前位置t上的字符
//记得反过来必须也得成立，否则不同构
//*/
//class Solution1 {
//public:
//	bool isIsomorphic(string s, string t) {
//		return isIsomorphicHelper(s, t) && isIsomorphicHelper(t, s);
//	}
//	bool isIsomorphicHelper(string s, string t) {
//		map<char, char> m;
//		for (int i = 0; i < s.size(); i++) {
//			if (m.find(s[i]) == m.end())
//				m.insert({ s[i],t[i] });
//			else if (m[s[i]] != t[i])
//				return false;
//		}
//		return true;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	string s = "ab", t = "aa";
//	cout << s1.isIsomorphic(s, t) << endl;
//	return 0;
//}