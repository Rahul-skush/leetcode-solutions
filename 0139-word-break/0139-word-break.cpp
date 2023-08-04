class Solution {
public:
    set<string> st;
  
    int mxlen = 0;
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto x :  wordDict)
            {st.insert(x);
             int n = x.size();
             mxlen = max(mxlen, n);}
        st.insert("");
        string tmp;
          vector<vector<int>> dp(s.size()+1, vector<int>(mxlen+1, -1));
        return find(0, s, tmp, dp);
    }
    
    bool find(int i, string &s, string &tmp, vector<vector<int>> &dp)
    {
        if(i==s.size()) return st.find(tmp)!=st.end();
        if(tmp.size()>=mxlen) return 0;
        if(dp[i][tmp.size()]!=-1) return dp[i][tmp.size()];
        tmp+= s[i];
        bool ans = false;
        if(st.find(tmp)!=st.end())
        {
            string k = "";
            ans |= find(i+1, s, k, dp);
        }
         ans |= find(i+1, s, tmp, dp);
        tmp.pop_back();
        return dp[i][tmp.size()] = ans==false?0:1;
        
    }
};