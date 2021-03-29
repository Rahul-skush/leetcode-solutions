class Solution {
public:
    vector<int> res;    
    int i = 0;
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        return dfs(root, voyage)?res : vector<int>{-1};
    }
    
    bool dfs(TreeNode * root, vector<int> v)
    {
        if(!root) return 1;
        if(root->val != v[i++]) return 0;
        if(root->left && root->left->val != v[i])
        {
            res.push_back(root->val);
           return  dfs(root->right, v) && dfs(root->left, v);
        }
        
        return dfs(root->left, v) && dfs(root->right, v);
    }
};
