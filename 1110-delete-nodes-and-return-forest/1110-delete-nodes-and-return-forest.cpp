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
    vector<TreeNode *> res;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int> st;
        for(auto x: to_delete)
            st.insert(x);
        
        find(root, st);
        if(root && st.find(root->val)==st.end())
            res.push_back(root);
        return res;
    }
    
    void find(TreeNode * &root, set<int> st)
    {
        if(!root) return;
        
        find(root->left, st);
        find(root->right, st);
        if(st.find(root->val)!=st.end())
        {
           if(root->left) res.push_back(root->left);
           if(root->right) res.push_back(root->right);
            root = NULL;
        }
    }
};