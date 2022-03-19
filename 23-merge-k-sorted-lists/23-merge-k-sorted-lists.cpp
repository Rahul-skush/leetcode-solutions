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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,
                    greater<pair<int, ListNode*>>> pq;
        for(auto x : lists)
            if(x)pq.push({x->val, x});
        
        ListNode *dummy = new ListNode(-1);
        ListNode * ans = dummy;
        
        while(!pq.empty())
        {
            pair<int, ListNode*> p = pq.top(); pq.pop();
            dummy->next = new ListNode(p.first);
            if(p.second->next)
            {
                pq.push({p.second->next->val, p.second->next});
            }
            
            dummy = dummy->next;
        }
        
        return ans->next;
            
    }
};