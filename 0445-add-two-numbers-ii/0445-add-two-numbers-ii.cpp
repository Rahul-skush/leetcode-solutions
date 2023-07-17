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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode * ans = new ListNode(0);
        int n = countSize(l1), m=countSize(l2);
        if(m>n){swap(l1, l2); swap(m, n);}
        while(l1 && l2)
        {
            int sum = l1->val  + (n>m?0:l2->val);
            l1 = l1->next;
            if(n>m)
            { n--;}
            else l2 = l2->next;
            ListNode *node = new ListNode(sum%10);
            sum/=10;
            ListNode * dummy = ans;
            while(ans)
            {
                ans->val += sum;
                sum = ans->val;
                ans->val = sum%10;
                sum/=10;
                if(sum ==0) break;
                ans = ans->next;
            }
            
            node->next = dummy;
            ans = node;
        }
        reverse_(ans);
        if(ans->val==0) ans = ans->next;
        return ans;
    }
    
    int countSize(ListNode * node)
    {
        int cnt =0;
        while(node)
            node = node->next, cnt++;
        return cnt;
    }
    
    ListNode* reverse_(ListNode * &node)
    {
        if(!node->next) return node;
        ListNode *prev = NULL;
        ListNode *curr = node;
        while(curr)
        {
            ListNode * next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            
        }
       
        return node = prev;
        
    }
};