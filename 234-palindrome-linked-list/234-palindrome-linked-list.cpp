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
    bool isPalindrome(ListNode* head) {
        ListNode * fast = head, *slow = head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
       ListNode *mid = reverseThis(slow);
        
        while(head && mid)
        {
            if(head->val!=mid->val) return 0;
            head = head->next;
            mid = mid->next;
        }
        return 1;
    }
    
    
    ListNode * reverseThis(ListNode *node)
    {
        ListNode *prev = node;
        ListNode *curr = node->next;
        node->next = NULL;
        while(curr)
        {
            ListNode *next = curr->next;
            curr->next= prev;
            prev = curr;
            curr= next;
        }
        return prev;
    }
};