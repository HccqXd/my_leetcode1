///*
//题目描述：
//	将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
//	本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1。
//
//示例:
//	给定有序数组: [-10,-3,0,5,9],
//	一个可能的答案是：[0,-3,9,-10,null,5]，它可以表示下面这个高度平衡二叉搜索树：
//	 0
//	/ \
//  -3   9
//  /   /
//-10  5
//*/
//#include"BTree.h"
//#include<vector>
//#include<stack>
//
//using namespace std;
//
///*解法1：递归
//有序数组:[-10,-3,0,5,9]
//我们取中点0作为根节点，[-10,-3]作为左子树节点,[5,9]作为右子树节点
//对于左子树数组[-10,-3],，我们取其中点-3作为左子树根节点，-10作为左子树的右子树节点
//对于右子树数组[5,9],我们取其中点9作为右子树根节点，5作为右子树的右子树节点
//*/
//class Solution1 {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		if (nums.empty())
//			return nullptr;
//		if (nums.size() == 1)
//			return new TreeNode(nums[0]);
//
//		int mid = nums.size() / 2;
//		TreeNode* node = new TreeNode(nums[mid]);
//		
//		vector<int> nums_l(nums.begin(), nums.begin() + mid);
//		node->left = sortedArrayToBST(nums_l);
//
//		vector<int> nums_r(nums.begin() + mid + 1, nums.end());
//		node->right = sortedArrayToBST(nums_r);
//		
//		return node;
//	}
//};
//
///*解法2:迭代
//待做
//*/
//class Solution2 {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		if (nums.empty())
//			return nullptr;
//		if (nums.size() == 1)
//			return new TreeNode(nums[0]);
//	}
//};
//
//int main(int argc, char** argv) {
//		Solution1 s;
//		vector<int> nums = {-10,-3,0,5,9};
//		
//		TreeNode* node = s.sortedArrayToBST(nums);
//		printBT(node);
//		destroyBT(node);
//		return 0;
//}