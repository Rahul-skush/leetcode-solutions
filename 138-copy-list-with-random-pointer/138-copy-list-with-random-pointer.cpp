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
        if(!head) return NULL;
        Node *head2 = head, *head1 = head;
        while(head)
        {
            Node * node = new Node(head->val);
            node->next = head->next;
            head->next = node;
            head = node->next;
        }
        
        while(head1 && head1->next)
        {
            if(head1->random)
            head1->next->random = head1->random->next;
            head1 = head1->next->next;
        }
        Node *prev = head2->next, *ans = prev;
        while(head2 && head2->next)
        {
            head2->next = head2->next->next;
            head2 = head2->next;
            if(head2)
            prev->next = head2->next;
            prev = prev->next;
        }
        
        return ans;
    }
};