///*
//��Ŀ������
//	ɾ�������е��ڸ���ֵ val �����нڵ㡣
//
//ʾ��:
//	����: 1->2->6->3->4->5->6, val = 6
//	���: 1->2->3->4->5
//*/
//#include"List.h"
///*�ⷨ1������ⷨ*/
//class Solution1 {
//public:
//	ListNode* removeElements(ListNode* head, int val) {
//		while (head!=nullptr && head->val==val) //��֤head���ֵ��Ϊval
//			head = head->next;
//		ListNode* curr = head, *pre = head;	//��������ָ�룬curr��ʾ��ǰ�Ľڵ㣬pre��ʾǰһ��ֵ��Ϊval�Ľڵ�
//		while (curr!=nullptr) {
//			curr = curr->next;	//curr�ڵ���������ƶ�
//			while (curr!=nullptr && curr->val == val) {	//��֤curr�ڵ��ֵ��Ϊval
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