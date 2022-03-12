/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*, Node*> mp;
        Node *prev = new Node(-1);
        Node * ans = prev, *root = head;
        while(head)
        {
            Node *node = new Node(head->val);
            mp[head] =node;
            prev->next = node;
            prev = prev->next;
            head = head->next; 
        }
       while(root)
       {
           mp[root]->random = root->random!=NULL?mp[root->random]:NULL;
           root = root->next;
       }
        
        return ans->next;
    }
    
    
};