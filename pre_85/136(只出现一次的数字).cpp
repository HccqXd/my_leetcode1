//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<numeric>
//
//using namespace std;
//
///*解法1：利用STL算法count,
//一次便利，计算每个元素的个数，
//个数为1即为所得*/
//class Solution1 {
//public:
//	int singleNumber(vector<int>& nums) {
//		int j;	
//		for (int i = 0; i < nums.size(); i++) {
//			if (count(nums.begin(), nums.end(), nums[i]) == 1) { //如果直接在这儿返回，在leetcode上会出错
//				j = i;
//				break;
//			}
//		}
//		return nums[j];
//	}
//};
//
///*解法2：哈希表法
//利用set，nums中第一次出现数字加入set，如果某个数字在set中，则删除set中此数字
//效果不理想，应该是哈希表的操作问题*/
//class Solution2 {
//public:
//	int singleNumber(vector<int>& nums) {
//		set<int> s;
//		for (int i = 0; i < nums.size(); i++) {
//			if (s.find(nums[i]) == s.end())
//				s.insert(nums[i]);
//			else
//				s.erase(nums[i]);
//		}
//		return *s.begin();
//	}
//};
//
///*解法3（官方解答）：数学
//2*(a+b+c)-(a+a+b+b+c)=c
//效果并不理想，主要是加入了set和拷贝操作
//*/
//class Solution3 {
//public:
//	int singleNumber(vector<int>& nums) {
//		set<int> s;
//		s.insert(nums.begin(), nums.end());
//		return 2 * accumulate(s.cbegin(), s.cend(),0) - accumulate(nums.cbegin(), nums.cend(),0);
//	}
//};
//
///*解法4（官方解答）：异或运算
//	(1)a^0=a
//	(2)a^a=0
//	(3)满足交换律和结合律(本题解答关键)：a^b^a=(a^a)^b=0^b=b
//*/
//class Solution4 {
//public:
//	int singleNumber(vector<int>& nums) {
//		int a = 0;
//		for (auto i : nums)
//			a ^= i;
//		return a;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	vector<int> nums = { 2,2,1 };
//	cout << s.singleNumber(nums) << endl;
//	return 0;
//}
//
