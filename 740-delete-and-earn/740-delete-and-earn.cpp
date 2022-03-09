class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp(10002, 0);
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        
        for(int i=1;i<10002;i++)
        {
            dp[i] = max(dp[i-1], (i-2>=0?dp[i-2]:0) + mp[i]*i);
        }
        
        return  dp[10001];
    }
};