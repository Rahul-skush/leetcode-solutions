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
    pair<int, TreeNode*> first;
    pair<int, TreeNode*> second;
    bool isCousins(TreeNode* root, int x, int y) {
        find(root, NULL,  x, y, 0);
        
        return  first.first==second.first  && first.second!=second.second;
    }
    
    void find(TreeNode * root, TreeNode * parent, int x, int y, int depth)
    {
        if(!root) return ;
        if(root->val==x)
         first = {depth, parent};
        
        if(root->val==y)
         second = {depth, parent};
        
        find(root->left, root, x, y, depth +1);
        find(root->right, root, x, y, depth +1);
    }
};
