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
      while(root)
      {
          if(root->left)
          {
              TreeNode * node = root->left;
              TreeNode * now = node;
              while(node->right)
                  node = node->right;
              
              node->right = root->right;
              root->right = now;
              root->left = NULL;
              
          }
          root = root->right;
      }
    }
    
   
};