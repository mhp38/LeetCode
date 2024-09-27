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

    TreeNode* MakeTree(TreeNode* root,int val)
    {
        if(root==NULL)return new TreeNode(val);
        if(root->val > val)root->left=MakeTree(root->left,val);
        else root->right=MakeTree(root->right,val);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i=0;i<preorder.size();i++)
        {
            root=MakeTree(root,preorder[i]);
        }
        return root;
    }
};
