class Solution {
public:
    int integerBreak(int n) {
        
        vector<int> dp = {0, 0, 1, 2, 4, 6, 9};
        for(int i=7;i<=n;i++)
        {
            dp.push_back(0);
            for(int j=i-1;j>=1;j--)
            dp[i] = max(dp[i], dp[j]*(i-j));
        }
        return dp[n];
    }
};