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
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        if(!root) return 1;
        TreeNode * node = findNode(root, x);
        
        int left = countNodes(node->left);
        int right = countNodes(node->right);
        
       // cout<<left<<" "<<right<<endl;
        if(n-(left)<left) return 1;
        if(n-(right)<right) return 1;
        if(n-(left+ right +1)>left + right+1) return 1;
        return 0;
    }
    
    int countNodes(TreeNode * root)
    {
        if(!root) return 0;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
    
    TreeNode *findNode(TreeNode * root, int x)
    {
        if(!root) return NULL;
        if(root->val==x) return root;
        TreeNode * left = findNode(root->left, x);
        TreeNode * right = findNode(root->right, x);
        if(left) return left;
        if(right) return right;
        return NULL;
    }
};