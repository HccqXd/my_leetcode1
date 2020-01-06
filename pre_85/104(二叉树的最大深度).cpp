//#include<iostream>
//#include<cmath>
//#include<stack>
//#include"BTree.h"
//
//using namespace std;
//
///*解法一：DFS递归*/
//class Solution1 {
//public:
//	int maxDepth(TreeNode* root) {
//		if (root == nullptr)
//			return 0;
//		int mlh = maxDepth(root->left);
//		int mrh = maxDepth(root->right);
//		return mlh >= mrh ? mlh+1 : mrh+1;
//	}
//};
//
///*解法二：DFS迭代*/
//class Solution2 {
//public:
//	int maxDepth(TreeNode* root) {
//		stack<pair<TreeNode* ,int>> st;
//		if (root == nullptr)
//			return 0;
//		int currdepth = 0, maxdepth = 0;
//		while (!st.empty()||root) {
//			while (root != nullptr) {
//				st.push(pair<TreeNode*, int>(root, ++currdepth));
//				root = root->left;
//			}
//			root = st.top().first;
//			currdepth = st.top().second;
//			if (maxdepth < currdepth)
//				maxdepth = currdepth;
//			st.pop();
//			root = root->right;
//		}
//		return maxdepth;
//	}
//};
//
//int main(int argc, char** argv) {
//	Solution2 s2;
//	TreeNode* node1 = new TreeNode(3);
//	TreeNode* node2 = new TreeNode(9);
//	TreeNode* node3 = new TreeNode(20);
//	TreeNode* node4 = new TreeNode(15);
//	TreeNode* node5 = new TreeNode(7);
//	
//	connectBTN(node1, node2, node3);
//	connectBTN(node3, node4, node5);
//	
//	cout << s2.maxDepth(node1) << endl;
//	destroyBT(node1);
//	return 0;
//}