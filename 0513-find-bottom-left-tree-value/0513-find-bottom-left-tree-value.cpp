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
    int res, lvl = 0;
    int findBottomLeftValue(TreeNode* root) {
        find(root, 0);
        if(lvl==0)
            return root->val;
        return res;
    }
    
    void find(TreeNode * root, int curr_lvl)
    {
        if(!root) return ;
        if(curr_lvl>lvl) {lvl = curr_lvl; res = root->val;}
        find(root->left, curr_lvl+1);
        find(root->right, curr_lvl+1);
    }
};