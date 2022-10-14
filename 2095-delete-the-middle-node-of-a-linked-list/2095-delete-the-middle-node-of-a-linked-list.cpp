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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return NULL;
        ListNode * slow = head, *prv = head, *fast = head;
        
        while(fast && fast->next)
        {
            prv = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prv->next = prv->next->next;
        return head;
    }
};