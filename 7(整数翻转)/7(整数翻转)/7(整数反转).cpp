#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

class Solution1 {
public:
	int reverse(int x) {
		vector<int> vec;
		while (x != 0) {
			vec.push_back(x % 10);
			x = x / 10;
		}
		int result = 0, mul = 1;
		for (auto pt = vec.rbegin(); pt != vec.rend(); pt++) {
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *(pt + 1) > 7)) return 0;
			if (result < INT_MIN / 10 || (result == INT_MIN / 10 && *(pt + 1) < -8)) return 0;
			result = result + (*pt)*mul;
			mul = mul * 10;
		}
		return result;
	}
};

class Solution2 {
public:
	int reverse(int x) {
		int rev = 0;
		while (x != 0) {
			int pop = x % 10;
			x /= 10;
			if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
			if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
			rev = rev * 10 + pop;
		}
		return rev;
	}
};

class Solution3 {
public:
	int reverse(int x) {
		int flag = (x >= 0) ? 1 : -1;
		long x_abs = abs((long)x); //注意这里必须是长整型，否则转字符串有损失
		string temp = to_string(x_abs);
		std::reverse(temp.begin(), temp.end());
		long rev = stol(temp)*flag;
		if (rev <= INT_MAX && rev >= INT_MIN)
			return (int)rev;
		return 0;
	}
};

int main(int argc, char** argv) {
	int ori = -123, result;
	Solution3 s3;
	result = s3.reverse(ori);
	cout << result << endl;
	return 0;
}