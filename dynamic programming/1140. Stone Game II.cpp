class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int m = piles.size();
        if(m==1) return piles[0];
        if(m==2) return piles[0] + piles[1];
        
        vector<vector<int>> dp(m, vector<int>(m, 0));
        vector<int> sum(m, 0);
        sum[m-1] = piles[m-1];
        for(int i=m-2;i>=0;i--)
            sum[i] = piles[i] + sum[i+1];
        helper( 0, 1, dp, sum);
        return dp[0][1];
    }
    
    int helper(int i, int M, vector<vector<int>> &dp, vector<int> sum)
    {
        if(i>=sum.size()) return 0;
        if(2*M>=sum.size()-i) return sum[i];
        if(dp[i][M]) return dp[i][M];
        
        int mini = INT_MAX;
        for(int j=1;j<=2*M;j++)
            mini = min(mini, helper(i+j, max(j, M), dp, sum));
        
        return dp[i][M] = sum[i] - mini;
    }
};
