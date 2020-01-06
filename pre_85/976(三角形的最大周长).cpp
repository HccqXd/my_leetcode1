/*
题目描述：
	给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。
	如果不能形成任何面积不为零的三角形，返回 0。

示例 1：
	输入：[2,1,2]
	输出：5

示例 2：
	输入：[1,2,1]
	输出：0

示例 3：
	输入：[3,2,3,4]
	输出：10

示例 4：
	输入：[3,6,2,3]
	输出：8
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*解法1:排序
从大到小排序，依次比较连续的三个数，如果这三个数能构成三角形，则是周长最长的三角形
比如[6,3,3,2]。
先从6开始，因为[6,3,3]不能构成三角形，则再看3，因为[3,3,2]能构成三角形，即为所求。
*/
class Solution1 {
public:
	int largestPerimeter(vector<int>& A) {
		int res = 0;
		if (A.size() < 3)
			return 0;
		sort(A.begin(), A.end(), [](int a, int b) {return a > b; });
		for (int i = 0; i < A.size()-2; i++) {
			if (A[i + 1] + A[i + 2] > A[i]) {
				res = A[i + 1] + A[i + 2] + A[i];
				return res;
			}
		}
		return res;
	}
};

int main(int argc, char** argv) {
	Solution1 s;
	vector<int> A = { 3,6,2,3 };
	cout << s.largestPerimeter(A) << endl;
	return 0;
}