//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*�ⷨһ�������ⷨ*/
//class Solution1 {
//public:
//	int maxProfit(vector<int>& prices){
//		int maxp = 0;
//		for (int i = 0; i < prices.size(); i++) {
//			for (int j = i+1; j < prices.size(); j++) {
//				maxp = max(prices[j] - prices[i], maxp);
//			}
//		}
//		return maxp;
//	}
//};
//
///*�ⷨ��(�ٷ����)
//�����������С�۸�*/
//class Solution2 {
//	int maxProfit(vector<int>& prices) {
//		int maxprofit = 0, minprice = INT_MAX;
//		for (int i = 0; i < prices.size(); i++) {
//			if (prices[i] < minprice)
//				minprice = prices[i];
//			else if (prices[i] - minprice > maxprofit)
//				maxprofit = prices[i] - minprice;
//		}
//		return maxprofit;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	vector<int> vec = { 7,6,4,3,1 };
//	cout << s1.maxProfit(vec) << endl;
//	return 0;
//}