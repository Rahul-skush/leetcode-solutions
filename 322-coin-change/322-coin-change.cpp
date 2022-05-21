class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, 1e8);
        sort(coins.rbegin(), coins.rend());
       dp[0] =0;
        for(int i=1;i<=amount;i++)
        {
            for(int j : coins)
                if(i>=j)
                    dp[i] = min(dp[i], dp[i-j]+1);
        }
        
        return dp[amount]!=1e8?dp[amount]:-1;
    }
    
};

// recursive
// class Solution {
// public:
   
//     int dp[100002][13];
//     int coinChange(vector<int>& coins, int amount) {
//         memset(dp, -1, sizeof(dp));
//         sort(coins.rbegin(), coins.rend());
       
//         int ans = find(coins,  amount, 0);
//         return ans!=1e7?ans:-1;
//     }
    
//     int find(vector<int> &coins,  int amount,  int i)
//     {
//         if(amount==0) return dp[0][i] =  0;
//         if(i>=coins.size() || amount<0) return 1e7;
//         if(dp[amount][i]!=-1) return dp[amount][i];
//         return dp[amount][i] =   min(find(coins,  amount-coins[i],  i)+1,
//                 find(coins, amount,  i+1));
//     }
// };



