class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        int res = 0, n = A.size();
        stack<int> st;
        st.push(0);
        for(int i=1;i<n;i++)
        {
            if(A[st.top()]>A[i])
                st.push(i);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && A[st.top()]<=A[i])
                {res = max(res, i - st.top()); st.pop();}
        }
        return res;
    }
};
