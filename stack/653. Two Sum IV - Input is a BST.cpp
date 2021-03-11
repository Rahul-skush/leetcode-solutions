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
    bool ans = false;
    unordered_map<int, int> mp;
    bool findTarget(TreeNode* root, int k) {
        findTargett(root, k);
        return ans;
    }
    
   void findTargett(TreeNode * root, int k)
    {
        if(!root) return ;
        int val = root->val;
        if(mp.count(k-val)>0) {ans = true; return ;}
        mp[val]++;
          findTargett(root->left, k);
        findTargett(root->right, k);
       
    }
};
