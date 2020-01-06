//#include<iostream>
//#include<stack>
//#include"BTree.h"
//
//using namespace std;
//
///*解法一：递归*/
//class Solution1 {
//public:
//	bool isMirror(TreeNode* p, TreeNode* q) {
//		if (p == nullptr&&q == nullptr) return true;
//		if (p == nullptr || q == nullptr) return false;
//		if (p->val != q->val) return false;
//		return (p->val==q->val)  && isMirror(p->left, q->right) && isMirror(p->right, q->left);
//	}
//	bool isSymmetric(TreeNode* root) {
//		return isMirror(root, root);
//	}
//};
//
///*解法二：迭代*/
//class Solution2 {
//public:
//	bool check(TreeNode* p, TreeNode* q) {
//		if (p == nullptr&&q == nullptr) return true;
//		if (p == nullptr || q == nullptr) return false;
//		if (p->val != q->val) return false;
//		return true;
//	}
//	bool isMirror(TreeNode* p, TreeNode* q) {
//		if (p == nullptr&&q == nullptr) return true;
//		if (!check(p, q)) return false;
//
//		stack<TreeNode* > stkp;
//		stack<TreeNode* > stkq;
//		stkp.push(p);
//		stkq.push(q);
//		while (!stkp.empty()) {
//			p = stkp.top();
//			q = stkq.top();
//			if (!check(p, q)) return false;
//			stkp.pop();
//			stkq.pop();
//			if (p != nullptr) {
//				if (!check(p->left, q->right)) return false;
//				if (p->left != nullptr) {
//					stkp.push(p->left);
//					stkq.push(q->right);
//				}
//				if (!check(p->right, q->left)) return  false;
//				if (p->right != nullptr) {
//					stkp.push(p->right);
//					stkq.push(q->left);
//				}
//			}
//		}
//		return true;
//	}
//	bool isSymmetric(TreeNode* root) {
//		return isMirror(root, root);
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	TreeNode* node1 = new TreeNode(1);
//	TreeNode* node2 = new TreeNode(2);
//	TreeNode* node3 = new TreeNode(2);
//	TreeNode* node4 = new TreeNode(3);
//	TreeNode* node5 = new TreeNode(4);
//	TreeNode* node6 = new TreeNode(4);
//	TreeNode* node7 = new TreeNode(3);
//	connectBTN(node1, node2, node3);
//	connectBTN(node2, node4, node5);
//	connectBTN(node3, node6, node7);
//	cout << s1.isSymmetric(node1) << endl;
//	destroyBT(node1);
//	return 0;
//}