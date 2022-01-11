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
    int sumRootToLeaf(TreeNode* root) {
        return find(root, "");
    }
    
    int find(TreeNode* root, string s)
    {
        if(!root) return 0;
        s+= '0' + root->val ;
        if(!root->left && !root->right) return convertdec(s);
        
        return (root->left?find(root->left, s):0) + 
               (root->right?find(root->right, s):0);
    }
    
    int convertdec(string s)
    {
        //cout<<s<<" ";
        int i=s.size()-1, j=0;
        int ans =0;
        while(i>=0)
        {
            ans += (s[i]=='1')?1<<j:0;
            i--;
            j++;
        }
        //cout<<ans<<endl;
        return ans;
    }
};