//#include<iostream>
//#include<string>
//
//using namespace std;
//
///*解法一：双指针法*/
//class Solution1 {
//public:
//	int lengthOfLastWord(string s) {
//		auto prePtr = s.begin(), currPtr = s.begin();
//		int result = 0;
//		if (s.empty())
//			return 0;
//		while (currPtr != s.end()) {
//			if (!isspace(*currPtr)) {	//当当前指针所指字符不为空格，则当前指针向后移动
//				++currPtr;
//				result = currPtr - prePtr;
//			}
//			else {	//遇到空格，当前指针先后移动，然后单词开始指针移到当前指针
//				++currPtr;
//				prePtr = currPtr;
//			}
//		}
//		return result;	//返回两个指针的距离，也就是返回最后一个单词的长度
//	}
//};
//
//int main(int argc, char** argv) {
//	string test1 = "Hello World";
//	string test2 = "  Hello";
//	string test3 = "Hello ";
//	string test4 = " Hello ";
//	Solution1 s1;
//	int result;
//	result = s1.lengthOfLastWord(test4);
//	cout << result << endl;
//}