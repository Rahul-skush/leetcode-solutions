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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * dummy = new ListNode(-1);
        ListNode *ans = dummy;
        while(head)
        {
            int f =0;
            while(head && head->next &&  head->val==head->next->val)
                 {head = head->next; f=1;}
            if(f) head = head->next;
            
            dummy->next = head;
            if(f==0) {dummy = dummy->next;
                     head = head->next;}
        }
        
        return ans->next;
    }
};