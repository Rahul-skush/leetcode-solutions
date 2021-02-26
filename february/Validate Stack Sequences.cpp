class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int  j=0, n = pushed.size();
        for(int i =0;i<n;i++)
        {
            st.push(pushed[i]);
            while(j<n && !st.empty() && st.top()==popped[j])
                {st.pop(); j++;}
        }
        
        if(!st.empty() || j<n) return false;
        return true;
    }
};
