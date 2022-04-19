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
    TreeNode * first, *middle, *last, *prv = NULL;
    int f =0;
    void recoverTree(TreeNode* root) {
        inorder(root);
        
        if(f==2) swap(first->val, last->val);
        else swap(first->val, middle->val);
    }
    
    void inorder(TreeNode* root)
    {
        if(!root) return ;
        inorder(root->left);
        if(prv)
        {
            if(root->val<prv->val)
                {
                if(f==0) {middle = root, first = prv; f=1;}
                else {last =root; f=2;}
                }
        }
        prv = root;
        inorder(root->right);
    }
};