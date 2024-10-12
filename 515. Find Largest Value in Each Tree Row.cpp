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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if (!root)
            return res;
        q.push(root);
        TreeNode* temp;
        while (!q.empty()) {
            int sz = q.size();
            int mx = INT_MIN;

            while (sz--) {

                temp = q.front();
                q.pop();
                mx = max(mx, temp->val);

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            res.push_back(mx);
        }
        return res;
    }
};
