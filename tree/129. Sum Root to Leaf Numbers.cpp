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
    int ans = 0;
    int sumNumbers(TreeNode* root) {
        inorder(root, 0);
        return ans;
    }
    
    void inorder(TreeNode *root, int sum)
    {
        if(!root) return ;
        if(!root->left && !root->right)
        {
            sum = sum*10 + root->val;
            ans += sum; return ;
        }
        sum = sum*10 + root->val;
        inorder(root->left, sum);
        inorder(root->right, sum);
    }
};
