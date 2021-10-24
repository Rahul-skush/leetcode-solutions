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
    int countNodes(TreeNode* root) {
        TreeNode *l = root, *r = root;
        int hl =0, hr =0;
        while(l)
            {l = l->left; hl++;}
        while(r)
            {r = r->right; hr++;}
        
        int ans = pow(2, hr)-1;
        if(hr ==hl) return ans;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
