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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            double ans =0;
            for(int i=0;i<n;i++)
            {
                TreeNode * p = q.front(); q.pop();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                
                ans += p->val;
            }
            
            res.push_back(ans/n);
        }
        return res;
    }
};