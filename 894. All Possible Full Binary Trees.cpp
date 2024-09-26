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
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N % 2 == 0)return {};//as only odd N will make trees see this: https://zxi.mytechroad.com/blog/tree/leetcode-894-all-possible-full-binary-trees/

        if(N==1)return {new TreeNode(0)};
        vector<TreeNode*>ans;
        for(int i=1;i<N;i+=2){
            vector<TreeNode*> left,right;
             left=allPossibleFBT(i);
             right=allPossibleFBT(N-i-1);

            for(TreeNode* l : left)
            {
                for(TreeNode* r : right)
                {
                    TreeNode* root = new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }



        }

        return ans;
    }
};
