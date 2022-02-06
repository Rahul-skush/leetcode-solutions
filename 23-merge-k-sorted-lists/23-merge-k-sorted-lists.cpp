class Solution {
public:
    vector<int> v;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        findNodes(lists);
        int flag =0, i=0;
        sort(v.begin(), v.end());  // sorting takes nlogn
        ListNode* ans=new ListNode(INT_MIN), *node = new ListNode(0); // initializing nodes with dummy data, to check null lists.
        while(i<v.size())
        { 
        ListNode* curr = new ListNode(v[i++]);
        node->next = curr;
        node = node->next;
             if(!flag) {ans = node; flag =1;}
        }
        
        return ans->val == INT_MIN?NULL: ans; //if lists is null simply return NULL
    }
    
    void findNodes(vector<ListNode*> &lists)
    {
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i])
            {
               v.push_back(lists[i]->val);
               lists[i] = lists[i]->next;
            }
        }
    }
};