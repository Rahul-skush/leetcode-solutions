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
    ListNode* partition(ListNode* head, int x) {
        ListNode *dummy1 = new ListNode(-1);
        ListNode *dummy2 = new ListNode(-1);
        ListNode *ans1 = dummy1, *ans2 = dummy2;
        while(head)
        {
            if(head->val<x)
            {
                dummy1->next = head;
                head = head->next;
                dummy1 = dummy1->next;
                dummy1->next = NULL;
            }else{
                dummy2->next = head;
                head = head->next;
                dummy2 = dummy2->next;
                dummy2->next = NULL;
            }
            
            
        }
        dummy1->next = ans2->next;
        return ans1->next;
    }
};