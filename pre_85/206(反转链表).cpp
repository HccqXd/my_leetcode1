///*
//��Ŀ������
//	��תһ��������
//
//ʾ��:
//	����: 1->2->3->4->5->NULL
//	���: 5->4->3->2->1->NULL
//*/
//#include "List.h"
//
///*
//�ⷨ1��˫ָ��
//һ��ָ���ʾ��i��λ�ã���һ��ָ��ÿ�δ�ͷ�ƶ���������i��λ��
//Ȼ�󽻻����ǵ�ֵ
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
///*�ⷨ2(�ٷ����):����*/
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