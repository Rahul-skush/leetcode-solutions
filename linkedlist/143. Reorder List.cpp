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
    vector<ListNode*> v;
    void reorderList(ListNode* head) {
        traverse(head);
        int i = 0, k = v.size()-1, j =1;
        while(i+1<k)
        {
           ListNode * next = v[i+1];
            v[i]->next = v[k];
            v[k]->next = next;
            v[k-1]->next = NULL;
            i+=1;
            k--;
        }
    }
    void traverse(ListNode * head)
    {
        if(!head) return ;
        v.push_back(head);
        traverse(head->next);
    }
};
