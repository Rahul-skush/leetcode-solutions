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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return  find(0, inorder.size()-1, 0, preorder, inorder);
        
    }
    
    TreeNode * find(int s, int e, int i, vector<int>& preorder, vector<int>& inorder)
    {
        if(s>e) return NULL;
        TreeNode * root = new TreeNode(preorder[i]);
        
        int j =s;
        for(; j<=e;j++)
            if(preorder[i]==inorder[j]) break;
        
        root->left = find(s, j-1, i+1, preorder, inorder);
        root->right = find(j+1 , e, i + j-s+1, preorder, inorder);
        return root;
    }
};