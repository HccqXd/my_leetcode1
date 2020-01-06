#ifndef  BI_SEARCH
#define BI_SEARCH

#include<iostream>
#include<vector>

using namespace std;

bool bi_search(vector<int>& nums, int i) {
	int left = 0, right = nums.size() - 1;
	int mid;
	while (left < right) {
		mid = left + (right - left) / 2;
		if (nums[mid] == i)
			return true;
		if (nums[mid] < i)
			left = mid + 1;
		if (nums[mid] > i)
			right = mid - 1;

	}
	if (nums[left] != i)
		return false;
	else
		return true;
}

#endif // ! BI_SEARCH

