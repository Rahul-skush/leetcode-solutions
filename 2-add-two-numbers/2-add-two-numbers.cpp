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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * dummy = new ListNode(-1);
        int carry = 0;
        ListNode * ans = dummy;
        while(l1 || l2)
        {
            int sum = carry + (l1?l1->val:0) + (l2?l2->val:0);
            carry = sum/10;
            sum %=10;
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        
        if(carry) dummy->next = new ListNode(carry);
        
        return ans->next;
    }
};