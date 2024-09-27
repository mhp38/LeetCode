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
    TreeNode* solve(vector<int>& nums,int x,int y)
    {
        if(x>y)return NULL;
        int mx=INT_MIN;
        int id;

        for(int i=x;i<=y;i++)
        {
            if(nums[i]>mx){
                mx=nums[i];
                id=i;
            }
        }

        TreeNode *root = new TreeNode(nums[id]);
        root->left=solve(nums,x,id-1);
        root->right=solve(nums,id+1,y);

        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int lft=0;
        int rt=nums.size()-1;

        return solve(nums,lft,rt);
    }
};
