
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans;
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode * p = q.front();
                q.pop();
                if(i==0) ans = p->val;
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
        }
        return ans;
    }
};
