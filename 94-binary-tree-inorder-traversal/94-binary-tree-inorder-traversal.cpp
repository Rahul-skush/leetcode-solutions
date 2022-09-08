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
    private: vector<int> res;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        find(root);
        return res;
    }
    
    private: void find(TreeNode *root)
    {
        if(!root) return;
        find(root->left);
        res.push_back(root->val);
        find(root->right);
    }
};