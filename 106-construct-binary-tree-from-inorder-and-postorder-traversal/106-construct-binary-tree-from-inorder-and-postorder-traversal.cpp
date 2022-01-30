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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, postorder, inorder.size()-1, 0, inorder.size()-1);
    }
    
    TreeNode * build(vector<int>& in, vector<int>& post, int i, int s, int e)
    {
        if(s>e) return NULL;
        
        TreeNode * root = new TreeNode(post[i]);
        
        int j = s;
        for(;j<=e;j++)
            if(in[j]==post[i]) break;
        
        root->left = build(in, post, i - (e-j) -1, s, j-1);
        root->right = build(in, post, i-1, j+1, e);
        
        return root;
    }
};