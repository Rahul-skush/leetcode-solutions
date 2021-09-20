class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));
        for(int i=0;i<=n;i++)
            dp[i][0] = 1;
       int mod =1e9+7;
        
         for(int j=1;j<=m;j++)
        {
            for(int i=1;i<=n;i++)
            {
                if(s[i-1]==t[j-1])
                    dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%mod;
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};
