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
    TreeNode * ans = new TreeNode(-1);
    TreeNode * node = ans;
    TreeNode* increasingBST(TreeNode* root) {
        find(root);
        
        return ans->right;
            
    }
    
    void find(TreeNode * root)
    {
        if(!root) return ;
        
        find(root->left);
        TreeNode *newNode = new TreeNode(root->val);
        node->right = newNode;
        node = newNode;
        find(root->right);
    }
};