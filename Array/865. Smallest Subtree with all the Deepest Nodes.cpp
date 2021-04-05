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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode *ans = root, *leftmost, *rightmost;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0;i<n;i++)
            {
                TreeNode *p = q.front();
                q.pop();
                if(i==0) leftmost = p;
                if(i==n-1) rightmost = p;
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
        }
        
        return lca(root, leftmost, rightmost);   
    }
    
    TreeNode *lca(TreeNode * root, TreeNode * p, TreeNode * q)
    {
        if(!root || root==p ||root==q) return root;
        TreeNode * left = lca(root->left, p, q);
        TreeNode * right = lca(root->right, p, q);
        
        return !left?right:!right?left:root;
    }
};
