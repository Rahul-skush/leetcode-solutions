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
    int sum =INT_MIN;
    int maxPathSum(TreeNode* root) {
        find(root);
        return sum;
    }
    
    int find(TreeNode*  root)
    {
        if(!root) return 0;
        
        int left = find(root->left);
        int right = find(root->right);
        sum = max({sum , root->val + left + right, root->val,
                   root->val + left, root->val + right});
        return  max(max(left, right) + root->val, root->val);
        
    }
};
