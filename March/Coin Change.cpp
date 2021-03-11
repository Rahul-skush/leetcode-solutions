class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {
        sort(coins.begin(), coins.end());
        vector<int> dp(sum+1, 1e7);
        dp[0] = 0;
        for(int i=1;i<=sum;i++)
        {
            for(int j : coins)
            {
                if(j<=i)
                {
                    dp[i] = min(dp[i-j] + 1, dp[i]);
                }
            }
        }
        return dp[sum]==1e7?-1:dp[sum];
    }
};
