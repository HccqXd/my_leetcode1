//#include<iostream>
//#include"List.h"
//
//using namespace std;
//
//class Solution1 {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode* phead = new ListNode(-1); //��������ͷ��������
//		ListNode* pNode = phead; 
//		while (l1 != nullptr && l2 != nullptr) { //ѭ����������ָ�붼��Ϊ��
//			if (l1->val <= l2->val) { //���l1ָ��Ԫ��С�ڵ���l2��ָԪ�أ���������ָ��ָ��l1,��l1����ƶ�
//				pNode->next = l1;
//				l1 = l1->next;
//			}
//			else {	//��֮����������ָ��ָ��l2,��l2����ƶ�
//				pNode->next = l2;
//				l2 = l2->next;
//			}
//			pNode = pNode->next; //pNode����ָ������������һ���ǿս��
//		}
//		pNode->next = (l1 == nullptr) ? l2 : l1;	//ѭ��������pNodeָ��û�����������
//		return phead->next;
//	}
//};
//
//class Solution2 { //�ٷ��ݹ�ⷨ
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