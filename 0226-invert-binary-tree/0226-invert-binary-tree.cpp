/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        // Recursive approach
        if (!root)
            return NULL;
        swap(root->left, root->right);

         invertTree(root->left);
         invertTree(root->right);

         return root;

        // Iterative approach, BFS

        // if (!root)
        //     return NULL;
        // queue<TreeNode*> q;
        // q.push(root);
        // while (!q.empty()) {
        //     TreeNode* cur = q.front();
        //     q.pop();
        //     swap(cur->left, cur->right);
        //     if (cur->left != NULL)
        //         q.push(cur->left);
        //     if (cur->right != NULL)
        //         q.push(cur->right);
        // }
        // return root;
    }
};