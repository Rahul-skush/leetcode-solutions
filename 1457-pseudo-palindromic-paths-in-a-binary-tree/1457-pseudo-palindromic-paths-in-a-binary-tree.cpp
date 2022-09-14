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
        if(!root) return 0;
        map<int, int> mp;
        find(root, mp);
        return ans;
    }
    
    bool help(map<int, int> &mp1)
    {
        int cnt =0;
        for(auto x : mp1)
            if(x.second&1) cnt++;
        return cnt<=1;
    }
    
    void find(TreeNode * root, map<int, int> &mp)
    {
    if(!root) return ;
        mp[root->val]++;
        if(!root->left && !root->right)
        {
            if(help(mp)) ans++;
        }
        find(root->left, mp);
        find(root->right, mp);
        mp[root->val]--;
    }
};