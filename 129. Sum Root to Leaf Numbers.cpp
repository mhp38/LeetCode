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
    int res = 0;
    void dfs(TreeNode* root) {

        // int res = 0;
        if (root == NULL)
            return;

        if (!root->left && !root->right) {
            res += root->val;
            return;
        }

        if (root->left) {
            root->left->val += (root->val * 10);
            dfs(root->left);
        }

        if (root->right) {
            root->right->val += (root->val * 10);
            dfs(root->right);
        }
    }

    int sumNumbers(TreeNode* root) {
        // int res = 0;
        dfs(root);
        return res;
    }
};
