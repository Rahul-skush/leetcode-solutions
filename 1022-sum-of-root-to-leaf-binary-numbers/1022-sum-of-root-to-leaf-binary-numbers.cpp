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
    int sumRootToLeaf(TreeNode* root) {
        return find(root, 0);
    }
    
    int find(TreeNode* root, int val)
    {
        if(!root) return 0;
        val = val*2 + root->val;
        if(!root->left && !root->right) return val;
        
        return (root->left?find(root->left, val):0) + 
               (root->right?find(root->right, val):0);
    }
    
};