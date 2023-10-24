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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode *> q;
        vector<int> res;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size(), mx = INT_MIN;
            while(n--)
            {
                TreeNode *p = q.front(); q.pop();
                mx = max(mx, p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            res.push_back(mx);
        }
        return res;
    }
};