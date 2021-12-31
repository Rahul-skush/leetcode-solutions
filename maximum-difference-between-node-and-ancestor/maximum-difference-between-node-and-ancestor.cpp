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
    int  ans = 0;
    int maxAncestorDiff(TreeNode* root) {
        find(root);
        return ans;
    }
    
    vector<int> find(TreeNode * root)
    {
        if(!root) return {INT_MAX, INT_MIN};
        if(!root->left && !root->right) return {root->val, root->val};
        
        vector<int> left = find(root->left);
        vector<int> right = find(root->right);
        vector<int> v = {min(left[0], right[0]), max(left[1], right[1])};
        int x = root->val;
        ans = max({ans, abs(x - v[0]), abs(x-v[1])});
        v[0] = min(v[0], x);
        v[1] = max(v[1], x);
        return v;
    }
};