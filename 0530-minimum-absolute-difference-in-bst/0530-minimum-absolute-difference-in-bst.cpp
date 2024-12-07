/**
Inorder Traversal

The problem requires us to find the minimum difference between the values of any
two nodes. Since the inorder traversal of a binary search tree is an increasing
sequence, we only need to find the minimum difference between the values of two
adjacent nodes in the inorder traversal.

We can use a recursive method to implement the inorder traversal. During the
process, we use a variable pre to save the value of the previous node. This way,
we can calculate the minimum difference between the values of two adjacent nodes
during the traversal.

The time complexity is O ( n ) , and the space complexity is O ( n ) . Here, n
is the number of nodes in the binary search tree.
 */
class Solution {
public:
    int ans = INT_MAX;
    vector<int> tree;
    void inord(TreeNode* root) {
        if (root->left)
            inord(root->left);
        tree.push_back(root->val);
        if (root->right)
            inord(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inord(root);

        int sz = tree.size();
        for (int i = 1; i < sz; i++) {
            ans = min(ans, abs(tree[i] - tree[i - 1]));
        }
        return ans;
    }
};