///*
//题目描述：
//	给定字符串 s 和 t ，判断 s 是否为 t 的子序列。
//	你可以认为 s 和 t 中仅包含英文小写字母。字符串 t 可能会很长（长度 ~= 500,000），而 s 是个短字符串（长度 <=100）。
//	字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。
//	（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。
//
//示例 1:
//	s = "abc", t = "ahbgdc"
//	返回 true.
//
//示例 2:
//	s = "axc", t = "ahbgdc"
//*/
//#include<iostream>
//#include<string>
//
//using namespace std;
//
///*解法1：循环比较*/
//class Solution1 {
//public:
//	bool isSubsequence(string s, string t) {
//		int s_index=0, t_index=0; //s_index:s的下标；t_index：t的下标；都是从0开始
//		for (; s_index < s.size(); s_index++) {
//			if (t_index == t.size() && s_index != s.size())	//如果t已经到末尾了，s还没遍历完就直接返回false
//				return false;
//			if (t_index == t.size() - 1 && s_index == s.size() - 1 && s[s_index] != t[t_index]) //处理同时到达末尾的情况
//				return false;
//			while (t_index != t.size()) {	//遍历t
//				if (s[s_index] == t[t_index]) { //如果此时两者相等，则下一次比较，t从t_index+1开始
//					t_index++;
//					break;
//				}
//				t_index++;
//			}
//		}
//		return true;
//	}
//};
//
///*解法2：解法1的简化*/
//class Solution2 {
//public:
//	bool isSubsequence(string s, string t) {
//		auto s_ptr = s.begin(), t_ptr = t.begin();
//		while (s_ptr != s.end() && t_ptr != t.end()) {	
//			if (*s_ptr == *t_ptr) {
//				s_ptr++;
//			}
//			t_ptr++;
//		}
//		if (s_ptr == s.end())
//			return true;
//		else
//			return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	string s = "b", t = "c";
//	Solution1 s1;
//	cout << s1.isSubsequence(s, t) << endl;
//	return 0;
//}