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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
       return find(root, low, high);
    }
    
    TreeNode* find(TreeNode * root, int low, int high)
    {
        if(!root) return NULL;
        
        if(root->val>=low && root->val<=high)
        {TreeNode * node = new TreeNode(root->val);
        node->left = find(root->left, low, high);
        node->right = find(root->right, low, high);
        return node;}
        
        if(root->val<low)
            return find(root->right, low, high);
        if(root->val>high)
            return find(root->left, low, high);
        
        return NULL;
    }
};