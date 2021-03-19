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
    vector<vector<int>>res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<int> v;
        dfs(root, v, 0, targetSum);
        return res;
    }
    
    void dfs(TreeNode *root, vector<int> v, int sum, int targetSum)
    {
        if(!root) return ;
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
            sum += root->val;
            if(sum == targetSum) res.push_back(v);
            v.pop_back();
            return ;
            
        }
        
        v.push_back(root->val);
        dfs(root->left, v, sum + root->val, targetSum);
        dfs(root->right, v, sum + root->val, targetSum);
        v.pop_back();
    }
};
