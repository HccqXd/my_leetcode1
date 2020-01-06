///*
//题目描述：
//	给定一个 N 叉树，找到其最大深度。
//	最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。
//
//例如，给定一个3叉树：
//				  1
//			   /  |  \
//			  3   2   4
//			 / \
//			5   6
//	 我们应返回其最大深度，3。
//
//说明:
//	 树的深度不会超过 1000。
//	 树的节点总不会超过 5000。
//*/
//#include<iostream>
//#include<vector>
//#include<deque>
//
//using namespace std;
//
//class Node {
//public:
//	int val;
//	vector<Node*> children;
//
//	Node(){}
//
//	Node(int _val) {
//		val = _val;
//	}
//
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
//
///*解法1:BFS*/
//class Solution1 {
//public:
//	int maxDepth(Node* root) {
//		if (root == nullptr)
//			return 0;
//		deque<pair<Node*,int>> d_n;
//		int res = 1;
//		d_n.push_back(pair<Node*,int>(root,res));
//		while (!d_n.empty()) {
//			root = d_n.front().first;	//令root永远指向队列第一个节点
//			res = d_n.front().second;	//当前节点的深度
//
//			if (d_n.size() == 1&&root->children.empty()) {	//如果当前队列只剩下一个节点，且此节点没有孩子节点，则返回此节点的深度
//				return res;
//			}
//
//			d_n.pop_front();
//			if (root->children.size() != 0) { //如果当前节点有孩子节点，将它的孩子节点依次加入队列
//				for (decltype(root) c_node : root->children) { //不能用auto，因为会忽略顶层const
//					d_n.push_back({c_node,res+1});
//				}
//			}
//		}
//		return res;
//	}
//};