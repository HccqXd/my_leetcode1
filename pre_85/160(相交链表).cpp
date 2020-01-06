//#include"List.h"
//
///*�ⷨ1�������ⷨ*/
//class Soluion1{
//public:
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* a = headA, *b = headB;
//		if (headA == nullptr || headB == nullptr)
//			return nullptr;
//		while (a != nullptr) {
//			b = headB;
//			while (b != nullptr) {
//				if (b == a)
//					return a;
//				b = b->next;
//			}
//			a = a->next;
//		}
//		return nullptr;
//	}
//};
//
///*�ⷨ2(�ٷ����):˫ָ�뷨
//��������ָ�� pApA �� pBpB���ֱ��ʼ��Ϊ���� A �� B ��ͷ��㡣Ȼ��������������������
//�� pApA ���������β��ʱ�������ض�λ������ B ��ͷ��� (��û������������ B); ���Ƶģ��� pBpB ���������β��ʱ�������ض�λ������ A ��ͷ��㡣
//����ĳһʱ�� pApA �� pBpB �������� pApA/pBpB Ϊ�ཻ��㡣
//��Ū���Ϊʲô��������, ���Կ���������������: A={1,3,5,7,9,11} �� B={2,4,9,11}���ཻ�ڽ�� 9�� ���� B.length (=4) < A.length (=6)��pBpB �� pApA �پ��� 22 ����㣬���ȵ���β������ pBpB �ض��� A ��ͷ��㣬pApA �ض��� B ��ͷ����pBpB Ҫ�� pApA ���� 2 ����㡣��ˣ����ǻ�ͬʱ���ｻ�㡣
//���������������ཻ������ĩβ�Ľ���Ȼ��ͬ����˵� pApA/pBpB ���������βʱ����¼������ A/B ��Ӧ��Ԫ�ء������Ԫ�ز���ͬ�������������ཻ��
//*/
//class Soluion2 {
//public:
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* a = headA, *b = headB, *enda, *endb;
//		if (headA == nullptr || headB == nullptr)
//			return nullptr;
//		while (a->next != nullptr) {
//			a = a->next;
//		}
//		enda = a;
//		while (b->next != nullptr) {
//			b = b->next;
//		}
//		endb = b;
//		a = headA;
//		b = headB;
//		if (enda != endb)
//			return nullptr;
//		else {
//			while (a != b) {
//				a = a->next;
//				b = b->next;
//				if (a == nullptr)
//					a = headB;
//				if (b == nullptr)
//					b = headA;
//			}
//			return a;
//		}
//		
//	}
//};