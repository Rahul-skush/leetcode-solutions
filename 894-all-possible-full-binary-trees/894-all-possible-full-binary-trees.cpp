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
    map<int, vector<TreeNode*>> dp;
    
    vector<TreeNode*> allPossibleFBT(int n) {
        
        return find(n);
    }
    
    vector<TreeNode*> find(int n)
    {
        if(n==1) return {new TreeNode(0)};
        if(dp[n].size()!=0) return dp[n];
        vector<TreeNode*> res;
        
        
            for(int i=1;i<n;i+=2)
            {
                int l = i, r = n-i-1;
                vector<TreeNode*> left = find(l);
                vector<TreeNode*> right = find(r);
                for(int j=0;j<left.size();j++)
                {
                    for(int k=0;k<right.size();k++)
                  {
                        TreeNode * root = new TreeNode(0);
                        root->left = left[j];
                        root->right = right[k];
                        res.push_back(root); 
                  }
                }
             }
            
            return dp[n] = res;
    }
};