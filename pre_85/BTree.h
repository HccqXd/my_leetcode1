#pragma once
#ifndef TREE_H
#define TREE_H

#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

TreeNode* connectBTN(TreeNode* pNode, TreeNode* lNode, TreeNode* rNode) {
	if (pNode != nullptr) {
		pNode->left = lNode;
		pNode->right = rNode;
	}
	return pNode;
}
void printBT(TreeNode* T) {	//先序遍历
	if (T != nullptr) {
		cout << T->val << endl;
		printBT(T->left);
		printBT(T->right);
	}	
}

void InprintBT(TreeNode* T) {	//中序遍历
	if (T) {
		InprintBT(T->left);
		cout << T->val << endl;
		InprintBT(T->right);
	}
}

void destroyBT(TreeNode* T) {
	if (T != nullptr) {
		TreeNode* lT = T->left;
		TreeNode* rT = T->right;
		delete T;
		T = nullptr;
		destroyBT(lT);
		destroyBT(rT);
	}
}
#endif // !TREE_H
