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
    vector<int> v;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1, v2;
        inorder(root1, v1);
        inorder(root2, v2);
        int i =0, j = 0;
        while(i<v1.size() && j<v2.size())
        {
            if(v1[i]<=v2[j])
            {
                v.push_back(v1[i++]);
            }else
                v.push_back(v2[j++]);
        }
        while(i<v1.size())
            v.push_back(v1[i++]);
        while(j<v2.size())
            v.push_back(v2[j++]);
        return v;
    }
    
    void inorder(TreeNode *root, vector<int> &v)
    {
        if(!root) return ;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
};
