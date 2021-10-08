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
    int sum =0;
    int distributeCoins(TreeNode* root) {
        travel(root);
        return sum;
    }
    
    int travel(TreeNode* root){
        if(!root) return 0;
        
        int left = travel(root->left);
        int right = travel(root->right);
        
        sum += abs(left) + abs(right);
        return root->val + left +right -1;
    }
};
