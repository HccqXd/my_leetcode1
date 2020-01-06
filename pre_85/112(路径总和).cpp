//#include<iostream>
//#include<stack>
//#include"BTree.h"
//
//using namespace std;
//
///*解法1：递归*/
//class Solution1 {
//public:
//	bool hasPathSum(TreeNode* root, int sum) {
//		if (root == nullptr)
//			return false;
//		sum -= root->val;
//		if (root->left == nullptr && root->right == nullptr)
//			return (sum == 0);
//		return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
//		
//	}
//};
//
///*解法2：DFS迭代
//思想来自于第104题（二叉树的最大深度）
//*/
//class Solution2 {
//public:
//	bool hasPathSum(TreeNode* root, int sum) {
//		stack<pair<TreeNode*, int>> st;
//		int curr = sum;
//		if (root == nullptr)
//			return false;
//		while (!st.empty() || root != nullptr) {
//			while (root != nullptr) {
//				st.push(pair<TreeNode*, int>(root, sum -= root->val));
//				root = root->left;
//			}
//			root = st.top().first;
//			sum = st.top().second;
//			if (sum == 0&&root->left==nullptr&&root->right==nullptr)
//				return true;
//			st.pop();
//			root = root->right;
//		}
//		return false;
//	}
//};
//
//int main(int argc, char** argv) {
//	TreeNode* node1 = new TreeNode(5);
//	TreeNode* node2 = new TreeNode(4);
//	TreeNode* node3 = new TreeNode(8);
//	TreeNode* node4 = new TreeNode(11);
//	TreeNode* node5 = new TreeNode(13);
//	TreeNode* node6 = new TreeNode(4);
//	TreeNode* node7 = new TreeNode(7);
//	TreeNode* node8 = new TreeNode(2);
//	TreeNode* node9 = new TreeNode(1);
//	connectBTN(node1, node2, node3);
//	connectBTN(node2, node4, nullptr);
//	connectBTN(node3, node5, node6);
//	connectBTN(node4, node7, node8);
//	connectBTN(node6, nullptr, node9);
//
//	Solution2 s;
//	cout << s.hasPathSum(node1, 22) << endl;
//	
//	destroyBT(node1);
//	return 0;
//}