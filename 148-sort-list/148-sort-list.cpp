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
    ListNode* sortList(ListNode* head) {
       
        
       return  mergeSort(head, NULL);
    }
    
    ListNode * mergeSort(ListNode *head, ListNode *tail)
    {
        if(!head) return NULL;
        if(head==tail)
            return new ListNode(head->val);
        ListNode *mid = findMid(head, tail);
        ListNode *left = mergeSort(head, mid);
        ListNode *right = mid?mergeSort(mid->next, tail):NULL;
        
       return  mergeTwoLists(left, right);
        
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *ans = dummy;
        
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                dummy->next = list1;
                list1 = list1->next;
            }else{
                dummy->next = list2;
                list2 = list2->next;
            }
            
            dummy = dummy->next;
        }
        
        while(list1)
        {
            dummy->next = list1;
            list1 = list1->next;
            dummy = dummy->next;
        }
        while(list2)
        {
            dummy->next = list2;
            list2 = list2->next;
            dummy = dummy->next;
        }
        
        return ans->next;
    }
    
    ListNode *findMid(ListNode *head, ListNode *tail)
    {
        ListNode *slow = head, *fast = head;
        
        while(fast!=tail && fast->next!=tail)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};