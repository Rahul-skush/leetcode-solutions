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
    long prv = -1e10, ans =1;
    bool isValidBST(TreeNode* root) {
         find(root);
        return ans;
    }
    
    int  find(TreeNode * root)
    {
        if(!root) return  1;
        
        find(root->left);
        if(root->val<=prv) {ans = 0; return 0;}
        prv = root->val;
       find(root->right);
        return 1;
    }
};