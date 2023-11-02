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
    int cnt =0;
    int averageOfSubtree(TreeNode* root) {
        find(root);
        return cnt;
    }
    
    pair<int, int>  find(TreeNode * root)
    {
        if(!root) return {0, 0};
        
        pair<int, int> left = find(root->left);
        pair<int, int> right = find(root->right);
        
        int sum = left.first + right.first + root->val;
        int n = left.second + right.second + 1;
        int avg = sum/n;
        if(avg == root->val)
            cnt+=1;
        return {sum, n};
    }
};