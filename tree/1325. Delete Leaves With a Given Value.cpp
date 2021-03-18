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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
       root =  inorder(root, target);
       return inorder2(root, target);
    }
    
    TreeNode *inorder(TreeNode * root, int target)
    {
         if(!root) return NULL;
        if(!root->right && !root->left){
            if(root->val == target) return NULL;
        }
         root->left =   inorder(root->left, target);
        
      root->right =  inorder(root->right, target);
        return root;
    }
    TreeNode *inorder2(TreeNode * root, int target)
    {
         if(!root) return NULL;
        root->right =  inorder2(root->right, target);
        
      root->left =   inorder2(root->left, target);
        if(!root->right && !root->left){
            if(root->val == target) return NULL;
        }
        return root;
    }
};
