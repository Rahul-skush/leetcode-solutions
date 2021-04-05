class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> mp;
        Node *first = new Node(0);
        int f =0;
        Node *ans = NULL, *root = head;
        while(head)
        {
            Node * nw  = new Node(head->val);
            first->next = nw;
            first = nw;
            mp[head] = first;
            head = head->next;
            if(f==0) {ans =first; f =1;}
        }
        Node *result = ans;
        while(root)
        {
            ans->random = mp[root->random];
            ans = ans->next;
            root = root->next;
        }
        
        return result;
    }
};
