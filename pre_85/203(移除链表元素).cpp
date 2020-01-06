///*
//题目描述：
//	删除链表中等于给定值 val 的所有节点。
//
//示例:
//	输入: 1->2->6->3->4->5->6, val = 6
//	输出: 1->2->3->4->5
//*/
//#include"List.h"
///*解法1：常规解法*/
//class Solution1 {
//public:
//	ListNode* removeElements(ListNode* head, int val) {
//		while (head!=nullptr && head->val==val) //保证head起点值不为val
//			head = head->next;
//		ListNode* curr = head, *pre = head;	//定义两个指针，curr表示当前的节点，pre表示前一个值不为val的节点
//		while (curr!=nullptr) {
//			curr = curr->next;	//curr节点总是向后移动
//			while (curr!=nullptr && curr->val == val) {	//保证curr节点的值不为val
//				curr = curr->next;
//			}
//			pre->next = curr;	
//			pre = curr;
//		}
//		return head;
//	}
//};
//
//int main(int argc, char** argv) {
//	ListNode* head = initlist();
//	Solution1 s;
//	ListNode* res = s.removeElements(head->next, 6);
//	while (res != nullptr) {
//		cout << res->val << endl;
//		res = res->next;
//	}
//	destroylist(head);
//	return 0;
//}