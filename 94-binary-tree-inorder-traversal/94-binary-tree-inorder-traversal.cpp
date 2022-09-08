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
    private: vector<int> res;
             stack<TreeNode *> st;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        st.push(root);
        nextLeft(root);
        while(!st.empty())
        {
            TreeNode* p = st.top(); st.pop();
            res.push_back(p->val);
            if(p->right){
                st.push(p->right);
                nextLeft(p->right);
            }
        }
        return res;
    }
    
    private: void nextLeft(TreeNode *root)
    {
        if(!root) return;
        while(root->left)
        {
            root = root->left;
            st.push(root);
        }
    }
};