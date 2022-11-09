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
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode *LCANode = findLCA(root, startValue, destValue);
        string str;
        string left;
        findPath(LCANode, str, left,  startValue);
        string right;
        str = "";
        findPath(LCANode, str, right, destValue);
        string ans;
        for(int i=0;i<left.size();i++)
            ans += 'U';
        ans += right;
        return ans ;
    }
    
    void findPath(TreeNode * root, string &str,  string & ans, int s)
    {
        if(!root) return ;
        if(root->val==s) {ans = str; return ;}
        str += "L";
         findPath(root->left, str, ans, s);
        str.pop_back();
        str += "R";
         findPath(root->right, str , ans, s);
        str.pop_back();
    }
    
    TreeNode * findLCA(TreeNode * root, int s, int e)
    {
        if(!root) return NULL;
        if(root->val==s || root->val==e) return root;
        TreeNode *left = findLCA(root->left, s, e);
        TreeNode *right = findLCA(root->right, s, e);
        if(left && right) return root;
        return left?left: right;
    }
};