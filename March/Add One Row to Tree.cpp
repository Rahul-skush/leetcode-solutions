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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1)
        {
            TreeNode *node = new TreeNode(v);
            node->left = root; return node;
        }
        queue<TreeNode*> q;
        q.push(root);
        d--;
        while(d>1)
        {
            int n = q.size();
            for(int i =0;i<n;i++)
            {
                TreeNode * p = q.front();
                q.pop();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            d--;
        }
        
        int n = q.size();
        for(int i = 0;i<n;i++)
        {
            TreeNode *p = q.front();
            q.pop();
            TreeNode *node1 = new TreeNode(v);
            
                if(p->left)
                node1->left = p->left;
                p->left = node1;
            TreeNode *node2 = new TreeNode(v);
                if(p->right)
                node2->right = p->right;
                p->right = node2;
        }
        return root;
    }
};
