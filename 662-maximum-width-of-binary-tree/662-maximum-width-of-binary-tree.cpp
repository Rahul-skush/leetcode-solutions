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
    int widthOfBinaryTree(TreeNode* root) {
       return find(root);
    }
    
    int find(TreeNode * root)
    {
        queue<pair<TreeNode *, long long>> q;
        q.push({root, 1});
        long long mod = 1e11+7;
        long long ans =0;
        while(!q.empty())
        {
            int n = q.size();
            long long f =-1, s =-1;
            for(int j=0;j<n;j++)
            {
                pair<TreeNode *, long long>v = q.front(); q.pop();
                TreeNode *p = v.first;
                long long i = v.second;
                if(f==-1) f =i;
                s = i;
                
                if(p->left) q.push({p->left, (2*i)%mod});
                if(p->right) q.push({p->right, ((2*i)%mod+1)%mod});
            }
            ans = max(ans, s - f+1);
        }
        return ans;
    }
};