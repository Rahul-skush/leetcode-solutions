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
    int level = 0, sum =0;
    int deepestLeavesSum(TreeNode* root) {
        find(root, 0);
        return sum;
    }
    
    void find(TreeNode * root, int lvl)
    {
        if(!root) return ;
        if(!root->left && !root->right){
            if(lvl>level) sum =root->val, level = lvl;
            else if(lvl==level) sum += root->val;
            return ;
        }
        
        find(root->left, lvl+1);
        find(root->right, lvl+1);
    }
};