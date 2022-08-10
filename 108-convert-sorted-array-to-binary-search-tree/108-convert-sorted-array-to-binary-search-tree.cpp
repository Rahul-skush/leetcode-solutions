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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return find(0, nums.size()-1, nums);
    }
    
    TreeNode * find(int l, int h, vector<int> &nums)
    {
        if(l>h) return NULL;
        int m = (l+h)/2;
        TreeNode * root = new TreeNode(nums[m]);
        root->left = find(l, m-1, nums);
        root->right = find(m+1, h, nums);
            return root;
    }
};