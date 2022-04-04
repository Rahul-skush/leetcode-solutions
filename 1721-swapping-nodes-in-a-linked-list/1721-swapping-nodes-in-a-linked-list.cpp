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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = findLength(head);
        ListNode * node1, *node2, *head2 = head, *ans = head;
            int i =1;
        while(i<=n-k+1)
        {
            node2 = head;
            head = head->next;
            i++;
        }
        
        int j =1;
        while(j<=k)
        {
            node1 = head2;
            head2 = head2->next;
            j++;
        }
        
        swap(node1->val, node2->val);
        
        return ans;
    }
    
    int findLength(ListNode *head)
    {
        return head?findLength(head->next)+1:0;
    }
};