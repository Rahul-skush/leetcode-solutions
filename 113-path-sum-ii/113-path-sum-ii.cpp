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
private : vector<vector<int>> res;
          void find(TreeNode * root, int sum, int targetSum,
                    vector<int> tmp)
          {
              if(!root) return ;
              tmp.push_back(root->val);
              sum += root->val;
              if(!root->left && !root->right) 
                  {
                  if(sum==targetSum) res.push_back(tmp); return ;}
              find(root->left, sum, targetSum, tmp);
              find(root->right, sum, targetSum, tmp);
              
          }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> tmp;
        find(root, 0, targetSum, tmp);
        return res;
    }

};