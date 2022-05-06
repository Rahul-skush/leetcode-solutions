class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(auto x : s)
        {
            if(!st.empty() && st.top().first!=x)
                st.push({x, 1});
            else if(!st.empty() && st.top().first==x)
            {
                pair<char, int> p = st.top(); st.pop();
                p.second += 1;
                if(p.second!=k) st.push(p);
            }else st.push({x, 1});
        }
        
        string str;
        while(!st.empty())
        {
            int x = st.top().second;
            char c = st.top().first;
            st.pop();
            
            while(x)
                str += c, x--;
        }
        
        reverse(str.begin(), str.end());
        return str;
    }
};
