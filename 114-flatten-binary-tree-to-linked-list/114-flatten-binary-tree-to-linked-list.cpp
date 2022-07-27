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
    TreeNode *prev = NULL;
    void flatten(TreeNode* root) {
        find(root);
    }
    
    void find(TreeNode * root)
    {
        if(!root) return ;
        TreeNode *node = root->right;
        if(prev)
        {
            prev->left = NULL;
            prev->right = root;
        }
        prev = root;
        find(root->left);
        find(node);
    }
};