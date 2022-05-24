class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int n = s.size(), ans =0;
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && s[st.top()]=='(' && s[i]==')')
                st.pop();
            else st.push(i);
        }
        
        if(st.empty()) return n;
        int a = n;
        while(!st.empty())
        {
           // cout<<st.top()<<" ";
            ans = max(ans, a - st.top()-1);
            a = st.top();
            st.pop();
        }
        ans = max(ans, a);
        return ans;
    }
};