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
    int ans = -1;
    int kthSmallest(TreeNode* root, int k) {
        int x = k;
        find(root, x);
        
        return ans;
        
    }
    
    void find(TreeNode * root, int & x)
    {
        if(!root) return ;
        if(x==0) return ;
        
        find(root->left, x);
        if(x==1) ans = root->val;
        x--;
        find(root->right, x);
        
    }
};