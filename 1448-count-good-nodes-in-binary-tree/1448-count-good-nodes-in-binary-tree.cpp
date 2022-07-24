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
    int cnt =0;
    int goodNodes(TreeNode* root) {
        find(root, root->val);
        return cnt;
    }
    
    int find(TreeNode * root, int val)
    {
        if(!root) return 0;
        if(root->val>=val) cnt++;
        find(root->left, max(root->val,val));
        find(root->right, max(root->val,val));
        return 0;
    }
};