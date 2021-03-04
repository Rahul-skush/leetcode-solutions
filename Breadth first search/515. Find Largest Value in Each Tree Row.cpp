class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return  {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size(), mx = INT_MIN;
            for(int i =0;i<n;i++)
            {
                TreeNode  *p = q.front();
                q.pop();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                mx = max(p->val, mx);
            }
            res.push_back(mx);
        }
        return res;
    }
};
