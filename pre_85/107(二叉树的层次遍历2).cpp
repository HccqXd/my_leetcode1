//#include<iostream>
//#include"BTree.h"
//#include<vector>
//#include<stack>
//
//using namespace std;
//
///*解法一：DFS递归*/
//class Solution1 {
//public:
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		vector<vector<int>> res;
//		DFS(root, 0, res);
//		return vector<vector<int>>(res.rbegin(),res.rend());
//	}
//	void DFS(TreeNode* p, int level, vector<vector<int>>& res) {
//		if (p == nullptr)
//			return;
//		if (res.size() <= level)	//res的长度小于等于层数，增加vector<int>
//			res.push_back(vector<int>());
//		res[level].push_back(p->val);	//当前层的容器添加元素
//		DFS(p->left, level + 1, res);
//		DFS(p->right, level + 1, res);
//	}
//	
//};
//
///*解法二：DFS迭代，
//根据题104所做
//*/
//class Solution2 {
//public:
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		vector<vector<int>> res = vector<vector<int>>();
//		stack<pair<TreeNode*, int>> st;
//		int currdepth = 0;
//		while (!st.empty() || root != nullptr) {
//			while (root != nullptr) {
//				st.push(pair<TreeNode* ,int>(root, ++currdepth));
//				int curr = st.top().second - 1;
//				if (res.size() <= curr)
//					res.push_back(vector<int>());
//				res[curr].push_back(root->val);
//				root = root->left;
//			}
//			root = st.top().first;
//			currdepth = st.top().second;
//			st.pop();
//			root = root->right;
//		}
//		return vector<vector<int>> (res.rbegin(),res.rend());
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
//	vector<vector<int>> res = s2.levelOrderBottom(node1);
//	for (auto vec : res) {
//		for (auto i : vec)
//			cout << i << " ";
//		cout << endl;
//	}
//	destroyBT(node1);
//	return 0;
//}