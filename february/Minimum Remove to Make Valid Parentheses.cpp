class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        int n =s.length();
        stack<pair<int, int>> st;
        vector<int> vis(n+1, 0);
        for(int  i = 0;i<n;i++)
        {
            char c = s[i];
            if(c!='(' && c!=')')
                {vis[i] =1; continue;}
            
            if(c=='(')
                {st.push({c, i});}
            else
                if(st.size()>0 && st.top().first == '(')
                    {
                    vis[st.top().second] =1;
                    vis[i] = 1;
                    st.pop(); 
                    }
                    
        }
        
        
        for(int i =0;i<n;i++)
        {
                if(vis[i]==1)
                    res += s[i];
        }
        return res;
    }
};
