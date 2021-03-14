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
        ListNode *front, *last = head, *ans = head;
        while(k>1){
            head = head->next;
            k--;
        }
        front = head;
        while(head->next){
            head = head->next;
            last = last->next;
        }
        
        swap(last->val, front->val);
        return ans;
    }
};
