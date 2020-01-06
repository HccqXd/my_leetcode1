//#include<iostream>
//#include<vector>
//#include<set>
//
//using namespace std;
//
///*解法1:哈希表法*/
//class Solution {
//public:
//	bool containsDuplicate(vector<int>& nums) {
//		set<int> s;
//		for (auto i : nums) {
//			if (s.find(i) != s.end())
//				return true;
//			s.insert(i);
//		}
//		return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution s;
//	vector<int> vec = { 1,2,3,4,1 };
//	cout << s.containsDuplicate(vec) << endl;
//}
