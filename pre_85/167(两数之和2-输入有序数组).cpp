//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
///*解法1：哈希表法，通过第1题想到*/
//class Solution1 {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		map<int, int> dict = {};
//		vector<int> res;
//		for (int i=0; i < numbers.size(); i++) {
//			int num = target - numbers[i];
//			if (dict.find(num) != dict.end()) {
//				res.push_back(dict[num]+1);
//				res.push_back(i+1);
//				break;
//			}
//			else
//				dict[numbers[i]] = i;
//		}
//		return res;
//	}
//};
//
///*解法2(官方解答)：双指针法
//我们使用两个指针，初始分别位于第一个元素和最后一个元素位置，比较这两个元素之和与目标值的大小。
//如果和等于目标值，我们发现了这个唯一解。
//如果比目标值小，我们将较小元素指针增加一。
//如果比目标值大，我们将较大指针减小一。移动指针后重复上述比较知道找到答案。
//*/
//class Solution2 {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		vector<int> res;
//		int i = 0, j = numbers.size() - 1;
//		while (i<j) {
//			if (numbers[i] + numbers[j] == target) {
//				res.push_back(i+1);
//				res.push_back(j+1);
//				break;
//			}
//			if (numbers[i] + numbers[j] > target) {
//				j--;
//			}
//			if (numbers[i] + numbers[j] < target) {
//				i++;
//			}
//		}
//		return res;
//	}
//};
//
//int main(int argc, char** argv) {
//	vector<int> nums = { 2,7,11,15 };
//	int target = 9;
//	Solution2 s;
//	vector<int> result = s.twoSum(nums, target);
//	for (auto i : result)
//		cout << i << endl;
//	return 0;
//}
//
