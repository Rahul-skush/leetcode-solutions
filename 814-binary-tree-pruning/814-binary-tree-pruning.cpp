/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        find(root);
        if(!root->left && !root->right && root->val==0) return NULL; 
        return root;
    }
    
    int find(TreeNode * &root)
    {
        if(!root) return 0;
        
        int left  = find(root->left);
        int right = find(root->right);
        if(left==0) root->left = NULL;
        if(right==0) root->right = NULL;
        
        return left + right + root->val;
    }
};