#pragma once
#ifndef TREE_H
#define TREE_H
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};

TreeNode* connectBTN(TreeNode* pNode, TreeNode* lNode, TreeNode* rNode) {
	if (pNode != nullptr) {
		pNode->left = lNode;
		pNode->right = rNode;
	}
	return pNode;
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
