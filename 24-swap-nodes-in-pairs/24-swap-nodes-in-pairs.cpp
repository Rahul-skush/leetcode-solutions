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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *dummy = new ListNode(-1);
        ListNode *ans = dummy;
        while(head && head->next)
        {
            dummy->next = head->next; // -1->2
            ListNode *next= head->next->next; // 3
            dummy->next->next = head; //2->1
            head->next = next; // 1->3
             dummy = head; //-1=1
            head = head->next;
            //cout<<head->val<<" ";
           
        }
        
        return ans->next;
    }
};