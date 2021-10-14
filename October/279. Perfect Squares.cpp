class Solution {
public:
    int numSquares(int n) {
        if(n<4) return n;
        vector<int> dp(n+1, INT_MAX);
        dp[1] = 1; dp[2] =2;
        dp[3] = 3;
        dp[4] = 1;
        dp[0] = 0;
        for(int i=5;i<=n;i++)
        {
            int x = sqrt(i);
            for(int j = x;j>=1;j--)
            {
                dp[i] = min(dp[i], dp[i - j*j]+1);
            }
        }
        return dp[n];
    }
};
