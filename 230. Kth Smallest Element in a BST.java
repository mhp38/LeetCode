/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int res, cnt = 0;

    public int kthSmallest(TreeNode root, int k) {
        inorder(root,k);//In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order.
        return res;
    }

    private void inorder(TreeNode root,int k){
        if(root == null)return;

        inorder(root.left,k);

        cnt++;

        if(cnt == k){
            res = root.val;
            return;
        }

        inorder(root.right,k);
    }
}
