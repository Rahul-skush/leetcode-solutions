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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int len = findLen(head);
        
        k = k%len;
         if(k==0) return head;
        k = len - k;
       
        ListNode * dummy = head;
       while(k-->1)
       {
           head = head->next;
       }
        
        ListNode * next = head->next;
        ListNode *ans = next;
        
        while(next && next->next)
            next = next->next;
        if(next)
        next->next = dummy;
        head->next = NULL;
        
        return ans;
    }
    
    
    int findLen(ListNode * head)
    {
        int cnt =0;
        while(head) cnt++, head= head->next;
        return cnt;
    }
};