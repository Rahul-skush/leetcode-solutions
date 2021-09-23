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
    vector<int> v;
    ListNode* removeZeroSumSublists(ListNode* head) {
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        int i =0;
        int mx = 1e4;
        vector<vector<int>> mp;
        for(;i<v.size();i++)
        {
            int sum  = 0;
            for(int j=i;j<v.size();j++)
            {
                sum += v[j];
                if(sum ==0)
                 {  mp.push_back({i, j});
                 i = j;
                 break;}
            }
        }
       
        
        for(int i=0;i<mp.size();i++)
        {
            int x = mp[i][0], y =mp[i][1];
            while(x<=y)
                {v[x] =mx; x++;}
        }
        
        
        ListNode * ans = new ListNode(0);
        ListNode * fans = ans;
         for(int i=0;i<v.size();i++)
         {
             if(v[i]!=mx)
             {
                 ListNode * node = new ListNode(v[i]);
                 ans->next = node;
                 ans = node;
             }
         }
        return fans->next;
    }
};
