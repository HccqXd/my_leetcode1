///*
//题目描述：
//	给定一个二叉树，返回所有从根节点到叶子节点的路径。
//
//说明: 叶子节点是指没有子节点的节点。
//
//示例:
//输入:
//
//   1
// /   \
//2     3
// \
//  5
//
//输出: ["1->2->5", "1->3"]
//
//解释: 所有根节点到叶子节点的路径为: 1->2->5, 1->3
//*/
//#include"BTree.h"
//#include<string>
//#include<vector>
//
///*解法1:递归*/
//class Solution1 {
//public:
//	vector<string> binaryTreePaths(TreeNode* root) {
//		vector<string> vs;
//		helper(root, "", vs);
//		return vs;
//	}
//	void helper(TreeNode* root, string s, vector<string>& vs) {
//		if (root != nullptr) {
//			s += to_string(root->val);
//			if (root->left == nullptr &&root->right == nullptr) {
//				vs.push_back(s);
//			}
//			else {
//				s += "->";
//				helper(root->left, s, vs);
//				helper(root->right, s, vs);
//			}
//		}	
//	}
//};
//
///*解法2:迭代
//待做
//*/