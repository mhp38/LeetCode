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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        if (!root)
            return 0;

        q.push(root);

        int mxs = 0, res = 0, ln, lvl = 0;

        while (!q.empty()) {

            int curSm = 0;
            ln = q.size();

            for (int i = 0; i < ln; i++) {

                TreeNode* temp = q.front();
                q.pop();
                curSm += (temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }

            lvl++;

            if (curSm > mxs) {
                mxs = curSm;
                res = lvl;
            }
        }
        return res;
    }
};
