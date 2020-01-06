//#include<iostream>
//#include"BTree.h"
//
//using namespace std;
//
///*解法一：递归
//（1）递归求出每个节点的高度，
//（2）再DFS比较每个节点的左子树和右子树的高度。
//*/
//class Solution1 {
//public:
//	bool isBalanced(TreeNode* root) {
//		if (root == nullptr)
//			return true;
//		if (abs(nodeDepth(root->left) - nodeDepth(root->right)) > 1)
//			return false;
//		return isBalanced(root->left) && isBalanced(root->right);
//	}
//	int nodeDepth(TreeNode* p) {
//		if (p == nullptr)
//			return 0;
//		int pl = nodeDepth(p->left);
//		int pr = nodeDepth(p->right);
//		return pl >= pr ? pl + 1 : pr + 1;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution1 s1;
//	TreeNode* node1 = new TreeNode(3);
//	TreeNode* node2 = new TreeNode(9);
//	TreeNode* node3 = new TreeNode(20);
//	TreeNode* node4 = new TreeNode(15);
//	TreeNode* node5 = new TreeNode(7);
//	
//	connectBTN(node1, node2, node3);
//	connectBTN(node3, node4, node5);
//	
//	cout << s1.isBalanced(node1) << endl;
//	destroyBT(node1);
//	return 0;
//}