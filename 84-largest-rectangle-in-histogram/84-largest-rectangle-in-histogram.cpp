class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> lsv(n, -1);
        vector<int> rsv(n, n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
             while(!st.empty() && heights[st.top()]>=heights[i])
                      st.pop();
            if(st.size())
            lsv[i] = st.top();
            st.push(i);
            
            //cout<<heights[lsv[i]]<<" ";
        }
        while(!st.empty()) st.pop();
      //  cout<<endl;
        for(int i=n-1;i>=0;i--)
        {
            
             while(!st.empty() && heights[st.top()]>=heights[i])
                      st.pop();
            if(st.size())
            rsv[i] = st.top();
            st.push(i);
            
           // cout<<heights[rsv[i]]<<" ";
        }
        int ans =0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans, heights[i]*(rsv[i] - lsv[i]-1));
        }
        return ans;
    }
};