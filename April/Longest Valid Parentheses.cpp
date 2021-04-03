class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0, cnt = 0, n = s.length();
        stack<int> st;
        for(int i=0;i<n;i++)
        {
                if(!st.empty() && s[st.top()]=='(' && s[i]==')')
                {
                    st.pop(); 
                }else
                 st.push(i);
        }
        if(st.empty()) return n;
        else
        {
            int a = n, b = 0;
            while(!st.empty())
            {
                ans = max(ans, a - st.top()-1);
                a = st.top();
                st.pop();
            }
            ans = max(ans, a);
        }
        return ans;
    }
};
