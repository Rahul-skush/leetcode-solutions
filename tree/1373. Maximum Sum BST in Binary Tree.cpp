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
    int ans = 0;
    int maxSumBST(TreeNode* root) {
        traverse(root);
        return ans;
    }
   vector<int> traverse(TreeNode * root)
   {
       if(!root) return {INT_MAX, INT_MIN, 0};
       vector<int> left (traverse(root->left)), right (traverse(root->right));
       if(left.empty()||right.empty()|| root->val<=left[1] || root->val >= right[0]) return {};
       int cur_sum = root->val + left[2] + right[2];
       ans = max(ans, cur_sum);
       return {min(root->val, left[0]), max(root->val, right[1]), cur_sum};
   }
};
