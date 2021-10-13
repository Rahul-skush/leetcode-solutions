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
    int i=0;
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return find(preorder, INT_MAX);
    }
    
    TreeNode * find(vector<int>&nums, int bound)
    {
        if(i==nums.size() || nums[i]>bound) return NULL;
        
        TreeNode * node = new TreeNode(nums[i++]);
        
        node->left = find(nums, node->val);
        node->right = find(nums, bound);
        return node;
    }
};
