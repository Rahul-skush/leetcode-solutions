class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto x : s)
        {
            if(!st.empty() && st.top()==x) {st.pop(); continue;}
            st.push(x);
        }
        
        s ="";
        while(!st.empty())
            {s += st.top(); st.pop();}
        reverse(s.begin(), s.end());
        return s;
    }
};