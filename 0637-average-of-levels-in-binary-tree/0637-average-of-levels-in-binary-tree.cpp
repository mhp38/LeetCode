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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        q.push(root);
        while (!q.empty()) {
            double sum = 0.0;
            int n = q.size();

            for (int i = 0; i < n; i++) {
                TreeNode* nod = q.front();
                q.pop();
                sum += nod->val;
                if (i == n - 1)
                    ans.push_back(sum / n);
                if (nod->left)
                    q.push(nod->left);
                if (nod->right)
                    q.push(nod->right);
            }
        }
        return ans;
    }
};