///*
//��Ŀ������
//	���ж�һ�������Ƿ�Ϊ��������
//
//ʾ�� 1:
//	����: 1->2
//	���: false
//ʾ�� 2:
//	����: 1->2->2->1
//	���: true
//*/
//#include"List.h"
//#include<vector>
//
///*�ⷨ1:ֱ�ӹ��츨�������������������ݣ��ٽ����߽��бȽ�*/
//class Solution1 {
//public:
//	bool isPalindrome(ListNode* head) {
//		if (head == nullptr || head->next == nullptr)
//			return true;
//		ListNode* p = head;
//		vector<int> vec;
//		while (p != nullptr) {
//			vec.push_back(p->val);
//			p = p->next;
//		}
//		int len = vec.size();
//		p = head;
//		for (int i = len - 1; i > (len-1)/2; i--) {
//			if (vec[i] != p->val)
//				return false;
//			p = p->next;
//		}
//		return true;
//	}
//};
//
///*�ⷨ2:����ָ�뷨
//���Կ��ǣ�˼��Ҳ����
//*/
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	ListNode* head = initlist();
//	cout << s.isPalindrome(head->next) << endl;
//	return 0;
//}