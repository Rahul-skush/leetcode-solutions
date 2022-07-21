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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *curr = dummy, *prv = NULL;
        head = dummy;
        while(head && left && right)
        {
            prv = head;
            head = head->next;
            curr = head;
            left--;
            right--;
        }
         ListNode * prvit = prv, *currit = curr;
        while(curr && right>=0)
        {
           ListNode *tmp = curr->next;
           curr->next = prv;
            prv = curr;
            curr = tmp;
            right--;
        }
        prvit->next = prv;
        currit->next = curr;
        return dummy->next;
    }
};