///*
//题目描述：
//	爱丽丝和鲍勃一起玩游戏，他们轮流行动。爱丽丝先手开局。
//	最初，黑板上有一个数字 N 。在每个玩家的回合，玩家需要执行以下操作：
//	选出任一 x，满足 0 < x < N 且 N % x == 0 。
//	用 N - x 替换黑板上的数字 N 。
//	如果玩家无法执行这些操作，就会输掉游戏。
//	只有在爱丽丝在游戏中取得胜利时才返回 True，否则返回 false。假设两个玩家都以最佳状态参与游戏。
//
//示例 1：
//	输入：2
//	输出：true
//	解释：爱丽丝选择 1，鲍勃无法进行操作。
//
//示例 2：
//	输入：3
//	输出：false
//	解释：爱丽丝选择 1，鲍勃也选择 1，然后爱丽丝无法进行操作。
//	 
//
//提示：
//	 1 <= N <= 1000
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
///*解法1：规律
//奇数返回false，偶数返回true
//*/
//class Solution1 {
//public:
//	bool divisorGame(int N) {
//		if (N % 2 == 0)
//			return true;
//		return false;
//	}
//};
//
///*解法2：动态规划
//令dp[N]表示当数字为N时，爱丽丝能否赢得比赛
//当dp[N-x](0<x<N)有一个为false时，则爱丽丝可以赢得比赛
//当dp[N-x](0<x<N)全为true时，则爱丽丝会输掉比赛
//*/
//class Solution2 {
//public:
//	bool divisorGame(int N) {
//		vector<bool> dp(N + 1, false);
//		dp[1] = false;
//		dp[2] = true;
//		for (int i = 3; i <= N; i++) {
//			for (int j = 1; j <= i/2; j++) {
//				if (i % j == 0) {
//					if (dp[i - j] == false) {
//						dp[i] = true;
//						break;
//					}
//				}
//				
//			}
//		}
//		return dp[N];
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s;
//	cout << s.divisorGame(6) << endl;
//	return 0;
//}
