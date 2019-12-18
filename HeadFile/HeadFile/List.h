#pragma once
#ifndef list_h
#define list_h

#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

/*创建链表，遇到回车符停止*/
ListNode* initlist() {
	cout << "请输入数据：" << endl;
	ListNode* phead = new ListNode(-1);
	ListNode* pnode = phead;
	int i;
	while (cin >> i) {
		ListNode* pnewnode = new ListNode(-1);
		pnewnode->val = i;
		pnewnode->next = nullptr;
		pnode->next = pnewnode;
		pnode = pnewnode;
		if (cin.get() == '\n')
			break;
	}
	return phead;
}

/*销毁链表*/
void destroylist(ListNode* phead) {
	ListNode* pnode = phead;
	while (pnode != nullptr) {
		phead = phead->next;
		delete pnode;
		pnode = phead;
	}
}


#endif
