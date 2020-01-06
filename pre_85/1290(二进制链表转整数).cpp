///*
//题目描述：
//	给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。
//	请你返回该链表所表示数字的 十进制值 。
//
//示例 1：
//	输入：head = [1,0,1]
//	输出：5
//	解释：二进制数 (101) 转化为十进制数 (5）
//
//示例 2：
//	输入：head = [0]
//	输出：0
//
//示例 3：
//	输入：head = [1]
//	输出：
//
//示例 4：
//	输入：head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
//	输出：18880
//
//示例 5：
//	输入：head = [0,0]
//	输出：0
//	 
//提示：
//	 链表不为空。
//	 链表的结点总数不超过 30。
//	 每个结点的值不是 0 就是 1。
//*/
///*解法1：常规
//先翻转链表
//再操作
//*/
//#include"List.h"
//
//class Solution1 {
//public:
//	int getDecimalValue(ListNode* head) {
//		ListNode* tmp = nullptr;
//		int res = 0;
//		int flag = 1;
//		while (head != nullptr) {
//			ListNode* t = head->next;
//			head->next = tmp;
//			tmp = head;
//			head = t;
//		}
//		head = tmp;
//		while (head != nullptr) {
//			res+=head->val*flag;
//			flag *= 2;
//			head = head->next;
//		}
//		return res;
//	}
//};
//
///*解法2(官方解答)：模拟
//	由于链表中从高位到低位存放了数字的二进制表示，
//	因此我们可以使用二进制转十进制的方法，
//	在遍历一遍链表的同时得到数字的十进制值。
//作者：LeetCode
//链接：https ://leetcode-cn.com/problems/convert-binary-number-in-a-linked-list-to-integer/solution/er-jin-zhi-lian-biao-zhuan-zheng-shu-by-leetcode/
//来源：力扣（LeetCode）
//*/
//class Solution2 {
//public:
//	int getDecimalValue(ListNode* head) {
//		ListNode* cur = head;
//		int ans = 0;
//		while (cur != nullptr) {
//			ans = ans * 2 + cur->val;
//			cur = cur->next;
//		}
//		return ans;
//	}
//};
//
//int main(int argc, char** argv) {
//	ListNode* head = initlist();
//	Solution1 s;
//	cout << s.getDecimalValue(head->next) << endl;
//	return 0;
//}