//#include<iostream>
//
//using namespace std;
//
///*�ⷨһ�����ֲ���*/
//class Solution1 {
//public:
//	int mySqrt(int x) {
//		if (x < 2)
//			return x;
//		int left = 0, right = x / 2+1,mid;	//right֮���Լ�1����Ϊ���չ�2
//		while (left < right) {
//			mid = left + (right - left) / 2;
//			if (mid > x/mid)
//				right = mid - 1;
//			else if (mid < x/mid)
//				left = mid + 1;
//			else
//				return mid;
//		}
//		if (left*left <= x)
//			return left;
//		else
//			return left - 1;
//	}
//};
//
///*�ⷨ����ţ�ٵ�����*/
//class Solution2 {
//public:
//	int mySqrt(int x) {
//		long r = x;
//		while (r*r > x)
//			r = (r + x / r) / 2;
//		return (int)r;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s2;
//	cout << s2.mySqrt(2) << endl;
//	return 0;
//}