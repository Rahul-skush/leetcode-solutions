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
    vector<int> findMode(TreeNode* root) {
        find(root);
         
        return res;
    }
private: int glFrq = 0; 
        int prvVal = INT_MIN;
        int cnt =1;
        vector<int> res;
        void find(TreeNode * root)
        {
            if(!root) return ;
            
            find(root->left);
            if(root->val==prvVal) cnt++;
            else cnt =1;
           if(cnt>glFrq){res.clear(); res.push_back(root->val); glFrq = cnt;}
            else if(cnt==glFrq){res.push_back(root->val);}
               
            prvVal = root->val;
            
            find(root->right);
        }
};