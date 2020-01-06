///*
//题目描述：
//	翻转一棵二叉树。
//
//示例：
//	输入：
//	   4
//	 /    \
//	 2     7
//	/ \   /  \
//   1   3 6    9
//	输出：
//	  4
//	/   \
//	7     2
//   / \   / \
//   9  6 3   1
//*/
//#include"BTree.h"
//#include<stack>
//
//using namespace std;
//
///*解法1:递归*/
//class Solution1 {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == nullptr)
//			return nullptr;
//		TreeNode* right = invertTree(root->right);
//		TreeNode* left = invertTree(root->left);
//		root->left = right;
//		root->right = left;
//		return root;
//	}
//};
//
///*解法1:递归2*/
//class Solution2 {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == nullptr)
//			return nullptr;
//		if (root->left != nullptr || root->right != nullptr) {
//			TreeNode* tmp = root->left;
//			root->left = root->right;
//			root->right = tmp;
//		}
//		invertTree(root->left);
//		invertTree(root->right);
//		return root;
//	}
//};
//
///*解法3:迭代
//利用栈
//*/
//class Solution3 {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == nullptr)
//			return nullptr;
//		stack<TreeNode* > ts;
//		TreeNode* p = root;
//		ts.push(p);
//		while (!ts.empty()) {
//			p = ts.top();
//			if (p->left != nullptr || p->right != nullptr) {
//				TreeNode* tmp = p->left;
//				p->left = p->right;
//				p->right = tmp;
//			}
//			ts.pop();
//			if (p->left != nullptr)
//				ts.push(p->left);
//			if (p->right != nullptr)
//				ts.push(p->right);
//		}
//		return root;
//	}
//};
//
//int main(int argc, char** argv) {
//		Solution2 s2;
//		TreeNode* node1 = new TreeNode(4);
//		TreeNode* node2 = new TreeNode(2);
//		TreeNode* node3 = new TreeNode(7);
//		TreeNode* node4 = new TreeNode(1);
//		TreeNode* node5 = new TreeNode(3);
//		TreeNode* node6 = new TreeNode(6);
//		TreeNode* node7 = new TreeNode(9);
//		
//		connectBTN(node1, node2, node3);
//		connectBTN(node2, node4, node5);
//		connectBTN(node3, node6, node7);
//		s2.invertTree(node1);
//		printBT(node1);
//		destroyBT(node1);
//		return 0;
//}