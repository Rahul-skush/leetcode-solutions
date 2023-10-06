class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+7);
        dp[1] = 0, dp[2] = 1, dp[3]=2, dp[4] = 4, dp[5] = 6, dp[7] = 12, dp[6] = 9;
        
    
        for(int i=8;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            dp[i] = max(dp[i], dp[j]*(i-j));
        }
        return dp[n];
    }
};
