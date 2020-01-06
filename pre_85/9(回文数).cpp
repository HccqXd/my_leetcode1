//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution1 {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0)
//			return false;
//		string temp = to_string(x);
//		string temp_re = to_string(x);
//		reverse(temp_re.begin(), temp_re.end());
//		if (temp == temp_re)
//			return true;
//		else
//			return false;
//	}
//};
//
//class Solution2 {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0 || x % 10 == 0 && x != 0)
//			return false;
//		int x_re = 0;
//		while (x_re < x) {
//			x_re = x % 10 + x_re * 10;
//			x = x / 10;
//		}
//		if (x == x_re||x == x_re / 10)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s2;
//	int x = 0;
//	cout << s2.isPalindrome(x) << endl;
//	return 0;
//}