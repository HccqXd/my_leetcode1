///*
//题目描述：
//	请判断一个链表是否为回文链表。
//
//示例 1:
//	输入: 1->2
//	输出: false
//示例 2:
//	输入: 1->2->2->1
//	输出: true
//*/
//#include"List.h"
//#include<vector>
//
///*解法1:直接构造辅助数组来保存链表数据，再将两者进行比较*/
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
///*解法2:快慢指针法
//可以考虑，思想也不难
//*/
//
//int main(int argc, char** argv) {
//	Solution1 s;
//	ListNode* head = initlist();
//	cout << s.isPalindrome(head->next) << endl;
//	return 0;
//}