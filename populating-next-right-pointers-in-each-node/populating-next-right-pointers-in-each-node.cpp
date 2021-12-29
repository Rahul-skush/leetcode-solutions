/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<Node*> v;
            for(int i=0;i<n;i++)
            {
                Node* p = q.front(); q.pop();
                
                if(p->left)
                {v.push_back(p->left); q.push(p->left);}
                if(p->right)
                {v.push_back(p->right); q.push(p->right);}
            }
            if(v.size()==0) break;
            for(int i=0;i<v.size()-1;i++)
            {
                v[i]->next = v[i+1];
            }
        }
        
        return root;
    }
};