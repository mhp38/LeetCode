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

    vector<int> v;

public:
    bool isValidBST(TreeNode* root) {

        if (root == NULL || (root->left == NULL && root->right == NULL))
            return true;

        inorder(root);

        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] <= v[i])
                return false;
        }
        return true;
    }

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};
