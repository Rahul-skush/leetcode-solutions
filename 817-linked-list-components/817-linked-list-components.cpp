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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans =0;
        while(head)
        {
            int f =0;
            while(head && st.count(head->val)) {head = head->next; f =1;}
            if(head)
            head = head->next;
            ans += f;
        }
        return ans;
    }
};