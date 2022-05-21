class Solution {
public:
   
    int dp[100002][13];
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        sort(coins.rbegin(), coins.rend());
       
        int ans = find(coins,  amount, 0);
        return ans!=1e7?ans:-1;
    }
    
    int find(vector<int> &coins,  int amount,  int i)
    {
        if(amount==0) return dp[0][i] =  0;
        if(i>=coins.size() || amount<0) return 1e7;
        if(dp[amount][i]!=-1) return dp[amount][i];
        return dp[amount][i] =   min(find(coins,  amount-coins[i],  i)+1,
                find(coins, amount,  i+1));
    }
};