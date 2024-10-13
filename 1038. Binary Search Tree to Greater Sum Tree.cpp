// Approach : Reverse Inordere (that means : Right, root, left)

class Solution {
public:
    int sum = 0;

    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }

    void dfs(TreeNode* root) {
        if (!root)
            return;
        dfs(root->right);
        sum += root->val;
        root->val = sum;
        dfs(root->left);
    }
};
