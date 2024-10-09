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

private:
    map<int, int> mp;

public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        dfs(root);
        int mx = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            mx = max(mx, it->second);
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == mx) {
                ans.push_back(it->first);
            }
        }
        return ans;
    }

    void dfs(TreeNode* root) {
        if (root == NULL)
            return;
        if (root->left) {

            dfs(root->left);
            root->val += root->left->val;
        }

        if (root->right) {

            dfs(root->right);
            root->val += root->right->val;
        }

        mp[root->val]++;
    }
};
