/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        queue<TreeNode*> q;
        q.push(root);
        string s;
        while(!q.empty())
        {
            int n =q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode * p = q.front(); q.pop();
                if(p==NULL) {s += "# "; continue;}
                s += to_string(p->val);
                s += ' ';
                 q.push(p->left);
                 q.push(p->right);
            }
        }
        //cout<<s<<endl;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string s) {
        if(s.size()==0) return NULL;
        int i =0, x =0;
        string t;
        while(s[i]!=' ')
            {t += s[i]; i++;}
        x = stoi(t);
        TreeNode * root = new TreeNode(x);
        queue<TreeNode*> q;
        q.push(root);
        i++;
        while(!q.empty())
        {
            long long n = q.size();
           
                TreeNode * p = q.front(); q.pop();
                string s1, s2;
                while(i<s.size() && s[i]!=' ')
                    {s1 += s[i]; i++;}
                i++;
                while(i<s.size() && s[i]!=' ')
                    {s2 += s[i]; i++;}
                i++; 
                if(s1.size() && s1!="#" && s1!=" "){
                    int x = stoi(s1);
                    TreeNode *node = new TreeNode(x);
                    p->left = node;
                    q.push(node);
                }
                if(s2.size() && s2!="#" && s2!=" "){
                    int x = stoi(s2);
                    TreeNode *node = new TreeNode(x);
                    p->right = node;
                    q.push(node);
                }
                if(i>=s.size()) break;
             
           // cout<<endl;
        }
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
