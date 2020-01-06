//#include<iostream>
//#include<stack>
//#include"BTree.h"
//
//using namespace std;
//
///*解法一：递归*/
//class Solution1 {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (p == nullptr &&q == nullptr) return true;
//		if (p == nullptr || q == nullptr) return false;
//		if (p->val != q->val) return false;
//		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//	}
//};
//
///*解法二（官方解法）：迭代*/
//class Solution2 {
//public:
//	bool check(TreeNode* p, TreeNode* q) {	//比较两个节点是否相等
//		if (p == nullptr &&q == nullptr) return true;
//		if (p == nullptr || q == nullptr) return false;
//		if (p->val != q->val) return false;
//		return true;
//	}
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (p == nullptr && q == nullptr) return true;
//		if (! check(p, q)) return false;
//		stack<TreeNode*> stkp;
//		stack<TreeNode*> stkq;
//		stkp.push(p);
//		stkq.push(q);
//		while (!stkp.empty()) {
//			p = stkp.top();
//			q = stkq.top();
//			if (!check(p, q)) return false;
//			stkp.pop();
//			stkq.pop();
//			if (p != nullptr) { //当前节点不为空，若子节点不为空，将子节点压栈
//				if (!check(p->left, q->left)) return false;
//				if (p->left != nullptr) {
//					stkp.push(p->left);
//					stkq.push(q->left);
//				}
//				if (!check(p->right, q->right)) return false;
//				if (p->right != nullptr) {
//					stkp.push(p->right);
//					stkq.push(q->right);
//				}
//			}
//		}
//		return true;
//	}
//};
//
//
//int main(int argc, char** argv) {
//	//Solution1 s1;
//	Solution2 s2;
//	TreeNode* node1 = new TreeNode(1);
//	TreeNode* node2 = new TreeNode(2);
//	TreeNode* node3 = new TreeNode(1);
//	TreeNode* node4 = new TreeNode(1);
//	TreeNode* node5 = new TreeNode(1);
//	TreeNode* node6 = new TreeNode(2);
//	connectBTN(node1, node2, node3);
//	connectBTN(node4, node6, node5);
//	cout << s2.isSameTree(node1, node4) << endl;
//	destroyBT(node1);
//	destroyBT(node4);
//	return 0;
//}