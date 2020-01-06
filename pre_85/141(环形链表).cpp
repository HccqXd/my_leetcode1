//#include<iostream>
//#include<set>
//#include"List.h"
//
//using namespace std;
//
///*解法1：哈希表*/
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
///*解法2(官方解答)：快慢指针
//快指针走两步，慢指针走一步，
//如果有环，则它们迟早会相遇，
//如果无环，则快指针先走到链表尾部
//*/
//class Solution2 {
//public:
//	bool hasCycle(ListNode* head) {
//		if (head == nullptr || head->next == nullptr)
//			return false;
//		ListNode* fast = head->next;
//		ListNode* slow = head;
//		while (fast != slow) {
//			if (fast == nullptr || fast->next == nullptr)	//如果快指针或者快指针下一个指针到达空指针则表明没有环
//				return false;
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return true;
//	}
//};