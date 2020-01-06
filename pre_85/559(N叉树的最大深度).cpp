///*
//��Ŀ������
//	����һ�� N �������ҵ��������ȡ�
//	��������ָ�Ӹ��ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�������
//
//���磬����һ��3������
//				  1
//			   /  |  \
//			  3   2   4
//			 / \
//			5   6
//	 ����Ӧ�����������ȣ�3��
//
//˵��:
//	 ������Ȳ��ᳬ�� 1000��
//	 ���Ľڵ��ܲ��ᳬ�� 5000��
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
///*�ⷨ1:BFS*/
//class Solution1 {
//public:
//	int maxDepth(Node* root) {
//		if (root == nullptr)
//			return 0;
//		deque<pair<Node*,int>> d_n;
//		int res = 1;
//		d_n.push_back(pair<Node*,int>(root,res));
//		while (!d_n.empty()) {
//			root = d_n.front().first;	//��root��Զָ����е�һ���ڵ�
//			res = d_n.front().second;	//��ǰ�ڵ�����
//
//			if (d_n.size() == 1&&root->children.empty()) {	//�����ǰ����ֻʣ��һ���ڵ㣬�Ҵ˽ڵ�û�к��ӽڵ㣬�򷵻ش˽ڵ�����
//				return res;
//			}
//
//			d_n.pop_front();
//			if (root->children.size() != 0) { //�����ǰ�ڵ��к��ӽڵ㣬�����ĺ��ӽڵ����μ������
//				for (decltype(root) c_node : root->children) { //������auto����Ϊ����Զ���const
//					d_n.push_back({c_node,res+1});
//				}
//			}
//		}
//		return res;
//	}
//};