//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1:二项式展开法
//C(n,k)=n!/(k!(n-k)!)=C(n,k-1)*(n-k)/(k+1)
//*/
//class Solution1 {
//public:
//	vector<int> getRow(int rowIndex) {
//		vector<int> vec;
//		for (int k = 0; k < rowIndex + 1; k++) {
//			vec.push_back(combination(rowIndex, k));
//		}
//		return vec;
//	}
//	
//	int combination(int n, int k){
//		if (k == 0)
//			return 1;
//		int res =  long(combination(n, k - 1))*(n - k + 1) / k; //这地方没弄明白为什么要将combination(n, k - 1)强制转换成long，
//																//因为返回的res是int类型，如果溢出，返回类型也应该是long。
//		return res;
//	}
//};
//
///*解法2（引用别人）：动态规划
//
//*/
//class Solution2 {
//public:
//	vector<int> getRow(int rowIndex) {
//		vector<int> vec(rowIndex + 1);
//		for (int i = 0; i < rowIndex + 1; i++) {	//模拟每层的数据，比如i=3，那么内嵌循环得到的数组就是[1,3,3,1]
//			for (int j = i; j >= 0; j--) {	//当前层从右往左更新数据
//				if (j == 0 || j == i)	//第1个元素和最后一个元素的值都为1
//					vec[j] = 1;
//				else {
//					vec[j] = vec[j] + vec[j - 1];	//更新当前层的数据，当前层的第i个数据是前一层的第i个数据+前一层的第i-1个数据
//				}
//			}
//		}
//		return vec;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s1;
//	vector<int> res = s1.getRow(4);
//	for (auto i : res)
//		cout << i << " ";
//	cout << endl;
//	return 0;
//}
