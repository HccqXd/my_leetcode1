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

/*�������������س���ֹͣ*/
ListNode* initlist() {
	cout << "���������ݣ�" << endl;
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

/*��������*/
void destroylist(ListNode* phead) {
	ListNode* pnode = phead;
	while (pnode != nullptr) {
		phead = phead->next;
		delete pnode;
		pnode = phead;
	}
}


#endif
