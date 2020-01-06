//#include<iostream>
//#include<string>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
//class Solution1 {
//public:
//	int romanToInt(string s) {
//		map<char, int> roman{
//			{'I',1},
//			{'V',5},
//			{'X',10},
//			{'L',50},
//			{'C',100},
//			{'D',500},
//			{'M',1000}
//		};
//		int result=0;
//		for(auto s_cur = s.begin(); s_cur != s.end(); s_cur++) {
//			if (s_cur+1 < s.end() && roman[*s_cur] < roman[*(s_cur + 1)]) {
//				result = result + roman[*(s_cur + 1)] - roman[*s_cur];
//				s_cur++;
//			}
//			else
//				result = result + roman[*s_cur];
//		}
//		return result;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	string s = "IV";
//	cout << s1.romanToInt(s) << endl;
//	return 0;
//}