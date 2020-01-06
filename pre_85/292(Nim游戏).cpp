///*
//题目描述：
//	你和你的朋友，两个人一起玩 Nim 游戏：桌子上有一堆石头，每次你们轮流拿掉 1 - 3 块石头。 
//	拿掉最后一块石头的人就是获胜者。你作为先手。
//	你们是聪明人，每一步都是最优解。 编写一个函数，来判断你是否可以在给定石头数量的情况下赢得游戏。
//
//示例:
//	输入: 4
//	输出: false 
//	解释: 如果堆中有 4 块石头，那么你永远不会赢得比赛；
// 		  因为无论你拿走 1 块、2 块 还是 3 块石头，最后一块石头总是会被你的朋友拿走。
//*/
//
////这题首先说明可以一下子想到，因此我觉得这题并没有什么价值
//
//#include<iostream>
//
//using namespace std;
//
///*解法1:递归
//会超时
//*/
//class Solution1 {
//public:
//	bool canWinNim(int n) {
//		if (n <= 3)
//			return true;
//		return !(canWinNim(n - 1) && canWinNim(n - 2) && canWinNim(n - 3));
//	}
//};
//
///*解法2：规律*/
//class Solution1 {
//public:
//	bool canWinNim(int n) {
//		if (n % 4 == 0)
//			return false;
//		return true;
//	}
//};
//int main(int argc, char** argv) {
//	Solution1 s;
//	cout << s.canWinNim(8) << endl;
//	return 0;
//}