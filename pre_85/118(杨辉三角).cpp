//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution1 {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> res;
//		if (numRows == 0)
//			return vector<vector<int>>();
//		if (numRows == 1)
//			return vector < vector<int> >{ {1}};
//		res.push_back(vector<int>());
//		res[0].push_back(1);
//		for (int i=1; i < numRows; i++) {
//			res.push_back(vector<int>());
//			res[i].push_back(1);
//			for (int j = 0; j < i-1; j++) 
//				res[i].push_back(res[i-1][j] + res[i-1][j+1]);
//			res[i].push_back(1);
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<vector<int>> res;
//	res = s1.generate(0);
//	for (auto vec : res) {
//		for (auto i : vec)
//			cout << i << " ";
//		cout << endl;
//	}
//	return 0;
//}