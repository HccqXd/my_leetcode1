//#include<iostream>
//#include"List.h"
//
//using namespace std;
//
//class Solution1 {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {	//当前指针下一指针所指的数等于当前指针所指的数，当前指针指向下一个结点的下一个结点
//		ListNode* curr = head;
//		while (curr != nullptr&&curr->next!=nullptr) {
//			if (curr->next->val == curr->val)
//				curr->next = curr->next->next;
//			else {
//				curr = curr->next;
//			}
//		}
//		return head;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	ListNode* l = initlist();
//	ListNode* result = s1.deleteDuplicates(l->next);
//	ListNode* result_c = result;
//	while (result_c != nullptr) {
//		cout << result_c->val << endl;
//		result_c=result_c->next;
//	}
//	destroylist(l);
//	return 0;
//}
//
