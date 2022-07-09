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
    int cnt=0;
    int averageOfSubtree(TreeNode* root) {
        find(root);
        return cnt;
    }
    
    vector<int> find(TreeNode * root)
    {
        if(!root) return {0, 0};
        
        
        vector<int> left = find(root->left);
        vector<int> right = find(root->right);
        int sum =  left[0] + right[0] + root->val;
        
        if(sum/(left[1] + right[1]+1)==root->val) cnt++;
        
        return {sum, left[1] + right[1] + 1};
    }
};