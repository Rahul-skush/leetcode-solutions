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
    int pathSum(TreeNode* root, int sum) {
        vector<int> v;
        if(!root) return 0;
        findpath(root, v, sum);
        return ans;
    }
    
    void findpath(TreeNode *root, vector<int> v, int sum)
    {
        if(!root) return ;
        
        for(int i=0;i<v.size();i++)
        {
            v[i]+= root->val;
            if(v[i]==sum) ans++;
        }
        v.push_back(root->val);
        if(v.back()==sum) ans++;
        findpath(root->left, v, sum);
        findpath(root->right, v, sum);
    }
};
