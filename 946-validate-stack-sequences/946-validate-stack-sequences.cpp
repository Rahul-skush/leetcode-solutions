class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i=0, j=0, n = pushed.size();
        
        while(i<n && j<n)
        {
            while((st.empty() || st.top()!=popped[j]) && i<n)
                  st.push(pushed[i++]);
            
            while(!st.empty() && st.top()==popped[j] && j<n)
                  st.pop(), j++;
        }
        
        return st.empty() && i==n && j==n;
    }
};