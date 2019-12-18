#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

class Solution1 {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int i, j;
		vector<int> result;
		for (i = 0; i != nums.size(); i++) {
			for (j = i + 1; j != nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					result.push_back(i);
					result.push_back(j);
				}
			}
		}
		return result;
	}
};

class Solution2 {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> dict = {};
		int i;
		vector<int> result;
		for (i = 0; i != nums.size(); i++) {
			int num2 = target - nums[i];
			if (dict.find(num2)!=dict.end()) {
				result.push_back(dict[num2]);
				result.push_back(i);
				break;
			}
			else
				dict[nums[i]] = i;
		}
		return result;
	}
};

int main(int argc, char** argv) {
	vector<int> nums = { 2,7,11,15 };
	int target = 9;
	Solution2 s2;
	vector<int> result = s2.twoSum(nums, target);
	for (auto i : result)
		cout << i << endl;
	return 0;
}