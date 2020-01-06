//#include<iostream>
//#include"List.h"
//
//using namespace std;
//
//class Solution1 {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode* phead = new ListNode(-1); //构建带有头结点的链表
//		ListNode* pNode = phead; 
//		while (l1 != nullptr && l2 != nullptr) { //循环条件：两指针都不为空
//			if (l1->val <= l2->val) { //如果l1指的元素小于等于l2所指元素，则新链表指针指向l1,且l1向后移动
//				pNode->next = l1;
//				l1 = l1->next;
//			}
//			else {	//反之，则新链表指针指向l2,且l2向后移动
//				pNode->next = l2;
//				l2 = l2->next;
//			}
//			pNode = pNode->next; //pNode总是指向新链表的最后一个非空结点
//		}
//		pNode->next = (l1 == nullptr) ? l2 : l1;	//循环结束后，pNode指向还没遍历完的链表。
//		return phead->next;
//	}
//};
//
//class Solution2 { //官方递归解法
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		if (l1 == nullptr)
//			return l2;
//		else if (l2 == nullptr)
//			return l1;
//		else if (l1->val <= l2->val) {
//			l1->next = mergeTwoLists(l1->next, l2);
//			return l1;
//		}
//		else{
//			l2->next = mergeTwoLists(l1, l2->next);
//			return l2;
//		}
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	Solution2 s2;
//	ListNode* l1 = initlist();
//	ListNode* l2 = initlist();
//	ListNode* lphead1 = l1->next;
//	ListNode* lphead2 = l2->next;
//	ListNode* result = s2.mergeTwoLists(lphead1,lphead2);
//	ListNode* result_c = result;
//	while (result_c != nullptr) {
//		cout << result_c->val<<" ";
//		result_c = result_c->next;
//	}
//	cout << endl;
//	destroylist(result);
//	return 0;
//}