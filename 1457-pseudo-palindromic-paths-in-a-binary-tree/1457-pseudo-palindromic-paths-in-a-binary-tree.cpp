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
    int ans =0;
    int pseudoPalindromicPaths (TreeNode* root) {
       map<int, int> mp;
        find(root, mp);
        return ans;
    }
    
    void find(TreeNode * root, map<int, int> &mp)
    {
        if(!root) return ;
        mp[root->val]++;
        
        if(!root->left && !root->right) {
            if(check(mp)) ans++;
            mp[root->val]--;
                   return ;
        }
        find(root->left, mp);
        find(root->right, mp);
       mp[root->val]--;
    }
    
    int check(map<int, int> &mp)
    {
        int cnto=0;
        for(auto x :  mp)
            if(x.second%2) cnto++;
        return cnto<=1;
    }
};