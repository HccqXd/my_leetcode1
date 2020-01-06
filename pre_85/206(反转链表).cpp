///*
//题目描述：
//	反转一个单链表。
//
//示例:
//	输入: 1->2->3->4->5->NULL
//	输出: 5->4->3->2->1->NULL
//*/
//#include "List.h"
//
///*
//解法1：双指针
//一个指针表示第i个位置，另一个指针每次从头移动到倒数第i个位置
//然后交换它们的值
//*/
//class Solution1 {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode* curr = head, *mv = head;
//		int len = 0;
//		while (mv != nullptr) {
//			len++;
//			mv = mv->next;
//		}
//		for (int i = 1; i <= len/2; i++) {
//			mv = head;
//			int j = len - i;
//			if (j < i)
//				break;
//			for (; j > 0; j--) {
//				mv = mv->next;
//			}
//			int tmp = curr->val;
//			curr->val = mv->val;
//			mv->val = tmp;
//			curr = curr->next;
//		}
//		return head;
//	}
//};
//
///*解法2(官方解答):迭代*/
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	ListNode* head = initlist();
//	ListNode* p = s.reverseList(head->next);
//	while (p != nullptr) {
//		cout << p->val << endl;
//		p = p->next;
//	}
//	destroylist(head);
//	return 0;
//}