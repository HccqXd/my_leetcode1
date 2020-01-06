///*
//题目描述：
//	给定一种规律 pattern 和一个字符串 str ，判断 str 是否遵循相同的规律。
//	这里的 遵循 指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应规律。
//
//示例1:
//	输入: pattern = "abba", str = "dog cat cat dog"
//	输出: true
//
//示例 2:
//	输入:pattern = "abba", str = "dog cat cat fish"
//	输出: false
//
//示例 3:
//	输入: pattern = "aaaa", str = "dog cat cat dog"
//	输出: false
//
//示例 4:
//	输入: pattern = "abba", str = "dog dog dog dog"
//	输出: false
//*/
//#include<iostream>
//#include<map>
//#include<string>
//#include<set>
//
//using namespace std;
//
///*解法1：哈希表法
//*/
//class Solution1 {
//public:
//	bool wordPattern(string pattern, string str) {
//		int pi = 0, str_curr = 0, str_pre = 0; //pi是pattern当前位置，str_curr和str_pre(但str_指向某个空格时)之间是一个单词
//		map<char, string> mset;	//存储一对映射，char是pattern中的一个字符，string是str中的一个单词
//		set<char> p;	//用来存储pattern的每个不重复字符
//		set<string> s;	//用来存储str中的每个不重复字符串
//		p.insert(pattern.begin(), pattern.end());
//		while (str_curr <= str.size()) {	//将str中的每个不重复字符串保存在s中
//			if (str_curr==str.size() ||isspace(str[str_curr])) {
//				s.insert(str.substr(str_pre, str_curr - str_pre));
//				str_pre = str_curr + 1;
//			}
//			str_curr++;	
//		}
//		if (p.size() != s.size())	//如果p和s的长度不相等，则返回false，比如pattern="abba",str="dog dog dog dog"，会返回false
//			return false;
//		str_curr = 0;
//		str_pre = 0;
//		while (pi < pattern.size()) {	//建立映射
//			if (str_curr >= str.size())
//				return false;
//			while (str_curr != str.size() && (!isspace(str[str_curr]))) {
//				str_curr++;
//			}
//			if (mset.find(pattern[pi]) == mset.end())
//				mset.insert({ pattern[pi],str.substr(str_pre,str_curr - str_pre) });
//			else if (mset[pattern[pi]] != str.substr(str_pre, str_curr - str_pre)) {
//				return false;
//			}
//					
//			str_curr++;
//			str_pre = str_curr;
//			pi++;
//		}
//		if (str_curr < str.size()) //如果没到str末尾，则表明str中单词比pattern的size()要大
//			return false;
//		return true;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	string pattern = "abc",str = "b c a";
//	cout << s.wordPattern(pattern, str) << endl;
//	return 0;
//}