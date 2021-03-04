class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = findlen(headA);
        int m = findlen(headB);
        while(n && m)
        {
            if(headA == headB) return headA;
            if(n==m)
            {
                headA = headA->next;
                headB = headB->next;
                n--;
                m--;
            }
            else
            if(n>m)
                {headA = headA->next; n--;}
            else
                {headB = headB->next; m--;}
        }
        return NULL;
    }
    
    int findlen(ListNode * H)
    {
        int cnt =0;
        while(H)
            {H = H->next; cnt++;}
        return cnt;
    }
};
