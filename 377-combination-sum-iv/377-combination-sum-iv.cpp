class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<long> dp(target+1);
        dp[0] = 1;
        int mod = INT_MAX;
        for(int i=1;i<=target;i++)
        {
            for(int j: nums)
            {
                if(i>=j)
                    dp[i] = (dp[i] + dp[i-j])%mod;
            }
        }
        
        return dp[target];
    }
};