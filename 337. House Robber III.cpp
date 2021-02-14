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
    int rob(TreeNode* root) {
        if(!root) return 0;
        int robmax =0, notrobmax = 0;
       return findmax(root, robmax, notrobmax);
    }
    
    int findmax(TreeNode * root, int &robmax, int &notrobmax)
    {
        if(!root) return 0;
        int leftRobmax = 0, leftNotRobmax = 0, rightRobmax = 0, rightNotRobmax = 0;
        
        int left = findmax(root->left, leftRobmax, leftNotRobmax);
        int right = findmax(root->right, rightRobmax, rightNotRobmax);
        
        robmax = root->val + leftNotRobmax + rightNotRobmax;
        notrobmax = left + right;
        
        return max(robmax, notrobmax);
    }
};
