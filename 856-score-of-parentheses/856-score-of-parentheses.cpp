class Solution {
public:
    int scoreOfParentheses(string S) {
         stack<char> st;
        int curr=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='(')
            {
                st.push(curr);
                curr =0;
            }
            else
            {
                curr = st.top() + max(2*curr,1);
                st.pop();
            }
                    
        }
        return curr;
    }
};