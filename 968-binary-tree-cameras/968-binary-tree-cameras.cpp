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

// 1 = covered
// 0 = have camera
// -1 = required camera
class Solution {
public:
int res=0;
    int minCameraCover(TreeNode* root) {
       int ans = find(root);
       if(ans==-1) res++;
       return res;
    }
    
    int find(TreeNode * root)
    {
        if(!root) return 1;
        
        int left = find(root->left);
        int right = find(root->right);
        
        if(left==-1 || right==-1)
            {res++; return 0;}
            if(left==0 || right==0) return 1;
            if(left==1 && right==1) return -1;
            
            return 0;
    }
};