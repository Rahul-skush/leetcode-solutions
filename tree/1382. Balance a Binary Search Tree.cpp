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
    vector<int> v;
    TreeNode* balanceBST(TreeNode* root) {
       inorder(root); 
        return constructTree(0, v.size()-1);
    }
    
    void inorder(TreeNode * root)
    {
        if(!root) return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    TreeNode * constructTree(int s, int e)
    {
        if(s>e) return NULL;
        int m = s + (e-s)/2;
        TreeNode * node =new TreeNode(v[m]);
        node->left = constructTree(s, m-1);
        node->right = constructTree(m+1, e);
        return node;
    }
    
};
