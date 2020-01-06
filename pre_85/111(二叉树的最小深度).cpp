//#include<iostream>
//#include"BTree.h"
//#include<algorithm>
//
//using namespace std;
//
//class Solution1 {
//public:
//	int minDepth(TreeNode* root) {
//		if (root == nullptr)
//			return 0;
//		if (root->left == nullptr&&root->right == nullptr)
//			return 1;
//		int l = minDepth(root->left);
//		int r = minDepth(root->right);
//		if (root->left == nullptr || root->right == nullptr)	//�����һ�ӽڵ�Ϊ�գ��򷵻ز�Ϊ�յĽڵ���С���
//			return l + r + 1;
//		return min(l + 1, r + 1);	//������ҽڵ㶼��Ϊ�գ��򷵻��������������С��
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
//	cout << s1.minDepth(node1) << endl;
//	destroyBT(node1);
//	return 0;
//}