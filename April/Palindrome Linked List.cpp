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
        int n = findLength(head);
        ListNode * prev = NULL, *slow = head, *fast  = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            ListNode * tmp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = tmp;
            
        }
        
         if(n%2) slow = slow->next;
        while(slow && prev)
        {
            //cout<<prev->val<<"-"<<slow->val<<" ";
            if(slow->val != prev->val) return 0;
            prev = prev->next;
            slow = slow->next;
        }
       // cout<<endl;
        return 1;
    }
    
    int findLength(ListNode *head)
    {
        int cnt =0;
        while(head)
        {
            cnt++;
            head = head->next;
        }
       // cout<<cnt<<"--";
        return cnt;
    }
};
