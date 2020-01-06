//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution1 {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		auto currPtr = digits.end() - 1;	//最后一位数字
//		int flag = 1;	//开始时只是表示末尾数字加1，其他位表示是否进位
//		while (currPtr != digits.begin()) {
//			*currPtr += flag;
//			flag = *currPtr > 9;	//如果加1或进位时，此位数大于9，进位标识符flag为真（1）
//			*currPtr %= 10;	//若加1超过9，则此位为0，其余情况此位数不变
//			--currPtr;
//		}
//
//		/*下面处理数组首端数字*/
//		*currPtr += flag;
//		flag = *currPtr > 9;
//		*currPtr %= 10;
//		if (flag)	//若首端数字进位大于9，则在首端插入1
//			digits.insert(digits.begin(), 1);	
//		return digits;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> digits = { 9,9,9 };
//	s1.plusOne(digits);
//	for (auto i : digits)
//		cout << i << " ";
//	cout << endl;
//	return 0;
//}