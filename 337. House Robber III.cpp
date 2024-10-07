/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rob(TreeNode* root) {
        if (!root)
            return 0;
        int a = 0;
        a += root->val;
        if (root->left) {
            a += rob(root->left->left) + rob(root->left->right);
        }
        if (root->right) {
            a += rob(root->right->left) + rob(root->right->right);
        }

        int b = rob(root->left) + rob(root->right);

        int ans = max(a, b);
        return ans;
    }
};
