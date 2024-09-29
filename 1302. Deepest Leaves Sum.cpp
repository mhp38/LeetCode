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
    int deepestLeavesSum(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum;
        while(!q.empty())
        {
            int sz=q.size();
            sum=0;
            while(sz--){
                auto r=q.front();
                q.pop();

                if(r->left)q.push(r->left);
                if(r->right)q.push(r->right);

                if(!r->left && !r->right)sum+=r->val;
            }
        }
        return sum;
    }
};
