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
    vector<TreeNode *> v;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& d) {
       set<int> s (d.begin(), d.end());
        inorder(root, s);
         if(root)
             v.push_back(root);
        vector<TreeNode *> res;
        for(auto x : v)
        {
            if(s.find(x->val)==s.end())
                res.push_back(x);
        }
        return res;
    }
    
    void inorder(TreeNode * &root, set<int> &s)
    {
        if(!root) return ;
        inorder(root->left, s);
        
        if(s.find(root->val)!=s.end())
        {
           if(root->left ) v.push_back(root->left); 
           if(root->right) v.push_back(root->right); 
        }
       if(root) inorder(root->right, s);
           if(s.find(root->val)!=s.end())
               root = NULL;
    }
};
