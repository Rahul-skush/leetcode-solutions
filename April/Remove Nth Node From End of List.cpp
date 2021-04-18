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
        int len = findLen(head) - n;
        if(len == 0) return head->next;
        ListNode *ans = head;
        while(len-->1)
        {
            head = head->next;
        }
        head->next = head->next->next;
        return ans;
    }
    int findLen(ListNode *head)
    {
        int cnt= 0;
        while(head)
            {cnt++; head = head->next;}
        return cnt;
    }
};
