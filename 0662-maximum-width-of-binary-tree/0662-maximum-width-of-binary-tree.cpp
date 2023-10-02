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
    long long ans =0;
    long long  MOD = pow(2, 34);
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode * , long long>> q;
        q.push({root, 0});
        while(!q.empty())
        {
            int  n = q.size();
            long long left =0, right =0;
            for(int i =0;i<n;i++)
            {
                pair<TreeNode * , long long> p = q.front();
                q.pop();
                if(i==0) left = p.second;
                if(i==n-1) right = p.second;
                
                if(p.first->left) q.push({p.first->left, ((2*p.second)%MOD +1)%MOD});
                if(p.first->right) q.push({p.first->right, ((2*p.second)%MOD +2)%MOD});
                
            }
            ans = max(ans, right -left +1);
            
        }
        return ans;
    }
    
    
};