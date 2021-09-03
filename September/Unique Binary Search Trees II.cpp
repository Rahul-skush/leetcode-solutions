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
    vector<TreeNode*> generateTrees(int n) {
        
       return  find(1, n);
    }
    
    vector<TreeNode*> find(int start, int end)
    {
        vector<TreeNode*> res;
        
        if(start>end)
        {
            res.push_back(NULL);
            return res;
        }
        
        for(int i=start;i<=end;i++)
        {
        vector<TreeNode*> leftTree = find(start, i-1);
        vector<TreeNode*> rightTree = find(i+1, end);
        
            for(auto x : leftTree)
            {
                for(auto y : rightTree)
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = x;
                    root->right = y;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
   
};
