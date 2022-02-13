class Solution {
public:
    int minInsertions(string s) {
        string s1 = s;
        reverse(s.begin(), s.end());
        string s2 = s;
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = dp[i-1][j-1] +1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return n - dp[n][n];
    }
};