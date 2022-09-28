/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * first = head, *second = NULL;
        while(n)
        {
            first = first->next;
            n--;
        }
        
        while(first)
        {
            if(!second) second = head;
            else
            second = second->next;
            first = first->next;
        }
        
        if(!second) return head->next;
        
        second->next = second->next->next;
        return head;
    }
};