//#include<iostream>
//#include<set>
//#include"List.h"
//
//using namespace std;
//
///*�ⷨ1����ϣ��*/
//class Solution1 {
//public:
//	bool hasCycle(ListNode* head) {
//		set<ListNode* > sl;
//		ListNode* p = head;
//		while (p != nullptr) {
//			if (sl.find(p) == sl.end())
//				sl.insert(p);
//			else
//				return false;
//			++p;
//		}
//		return true;
//	}
//};
//
///*�ⷨ2(�ٷ����)������ָ��
//��ָ������������ָ����һ����
//����л��������ǳ����������
//����޻������ָ�����ߵ�����β��
//*/
//class Solution2 {
//public:
//	bool hasCycle(ListNode* head) {
//		if (head == nullptr || head->next == nullptr)
//			return false;
//		ListNode* fast = head->next;
//		ListNode* slow = head;
//		while (fast != slow) {
//			if (fast == nullptr || fast->next == nullptr)	//�����ָ����߿�ָ����һ��ָ�뵽���ָ�������û�л�
//				return false;
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return true;
//	}
//};