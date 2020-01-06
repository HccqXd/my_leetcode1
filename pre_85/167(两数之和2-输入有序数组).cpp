//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
///*�ⷨ1����ϣ����ͨ����1���뵽*/
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
///*�ⷨ2(�ٷ����)��˫ָ�뷨
//����ʹ������ָ�룬��ʼ�ֱ�λ�ڵ�һ��Ԫ�غ����һ��Ԫ��λ�ã��Ƚ�������Ԫ��֮����Ŀ��ֵ�Ĵ�С��
//����͵���Ŀ��ֵ�����Ƿ��������Ψһ�⡣
//�����Ŀ��ֵС�����ǽ���СԪ��ָ������һ��
//�����Ŀ��ֵ�����ǽ��ϴ�ָ���Сһ���ƶ�ָ����ظ������Ƚ�֪���ҵ��𰸡�
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
