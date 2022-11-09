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
        string str;
        string left;
        findPath(root, str, left,  startValue);
        string right;
        str = "";
        findPath(root, str, right, destValue);
        string ans;
        int i=0;
        while(i<left.size() && i<right.size() && left[i]==right[i]) i++;
        int j = i;
        while(i<left.size()) {ans += 'U'; i++;}
        while(j<right.size()) ans += right[j++];
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
};