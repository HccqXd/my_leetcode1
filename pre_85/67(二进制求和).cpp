//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Solution1 {
//public:
//	string addBinary(string a, string b) {
//		if (a.size() < b.size())	//如果字符串a长度小于b的长度，则交换a,b，我们最终是返回a
//			a.swap(b);
//		char bc;	//定义字符串b某位的值
//		auto aPtr = a.rbegin(), bPtr = b.rbegin();	//反迭代器
//		while(aPtr!=a.rend()) {
//			if (bPtr == b.rend())	//当字符串b当前位置没有字符，则让b的当前字符为'0'
//				bc = '0';
//			else {
//				bc = *bPtr;
//				++bPtr;
//			}
//				
//			*aPtr = *aPtr - '0' + bc;	//字符串a和字符串b相应位置直接相加
//			if (*aPtr >= '2' && (aPtr+1 != a.rend())) {	//当字符串a当前位置字符比'2'大执行进位操作
//					*aPtr = (*aPtr - '0') % 2 + '0';	//字符串a当前位置字符若是'2',则置其位字符为'0'，若是'3'，则置其位为'1',
//					*(aPtr + 1) = *(aPtr + 1) + 1;		//进位操作，让字符串a当前位置前一位字符加1
//			}
//			++aPtr;
//		}
//		if (*(aPtr-1) >= '2') {	//对字符串a首字符进行操作
//			*(aPtr-1) = (*(aPtr-1) - '0') % 2 + '0';
//			a = '1' + a;
//		}
//		return a;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	string a = "1010", b = "1011";
//	cout << s1.addBinary(a, b) << endl;
//	return 0;
//}