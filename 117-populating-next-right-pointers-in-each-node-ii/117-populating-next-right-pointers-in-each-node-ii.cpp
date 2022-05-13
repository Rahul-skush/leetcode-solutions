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
        Node * curr = root, *prv = NULL, *head = NULL;
        while(curr)
        {
            while(curr)
            {
                if(curr->left)
                {
                    if(prv)
                    {
                    prv->next = curr->left;
                    }
                    else head = curr->left;
                    prv = curr->left;
                }
                
                if(curr->right)
                {
                    if(prv)
                    {
                    prv->next = curr->right;
                    }
                    else head = curr->right;
                    prv = curr->right;
                }
                
                curr = curr->next;
            }
            
            curr = head;
            head = NULL;
            prv = NULL;
        }
        return root;
    }
};