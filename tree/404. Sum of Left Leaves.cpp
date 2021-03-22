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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode *> q;
        q.push(root);
        int sum =0 ;
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode * p =q.front(); q.pop();
                if(!p) continue;
                if(p->left && !p->left->left && !p->left->right) 
                    sum += p->left->val;
               if(p->left)  q.push(p->left);
                if(p->right) q.push(p->right);
            }
        }
        return sum;
    }
};
