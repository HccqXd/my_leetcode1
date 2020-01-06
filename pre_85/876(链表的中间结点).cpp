///*
//题目描述：
//	给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//	如果有两个中间结点，则返回第二个中间结点。
//
//示例 1：
//	输入：[1,2,3,4,5]
//	输出：此列表中的结点 3 (序列化形式：[3,4,5])
//	返回的结点值为 3 。 (测评系统对该结点序列化表述是 [3,4,5])。
//	注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//	ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
//
//示例 2：
//	输入：[1,2,3,4,5,6]
//	输出：此列表中的结点 4 (序列化形式：[4,5,6])
//	由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。
// 
//
//提示：
//	给定链表的结点数介于 1 和 100 之间。
//*/
//#include"List.h"
//
///*解法1:常规,其实这题根本没有头节点，误人子弟
//先遍历链表，得到链表长度len
//再从头遍历链表到第len/2+1个结点即为所求
//*/
//class Solution1 {
//public:
//	ListNode* middleNode(ListNode* head) {
//		int len = 0;
//		ListNode* res = head->next;
//		while (res != nullptr) {
//			len++;
//			res = res->next;
//		}
//		res = head;
//		for (int i = 0; i <= len / 2 + 1; i++) {
//			res = res->next;
//		}
//		return res;
//	}
//};
//
///*解法2(官方解答)：快慢指针法
//	当用慢指针 slow 遍历列表时，让另一个指针 fast 的速度是它的两倍。
//	当 fast 到达列表的末尾时，slow 必然位于中间。
//
//作者：LeetCode
//链接：https ://leetcode-cn.com/problems/middle-of-the-linked-list/solution/lian-biao-de-zhong-jian-jie-dian-by-leetcode/
//来源：力扣（LeetCode）*/
//class Solution {
//public:
//	ListNode* middleNode(ListNode* head) {
//		ListNode* slow = head;
//		ListNode* fast = head;
//		while (fast != NULL && fast->next != NULL) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return slow;
//	}
//};
