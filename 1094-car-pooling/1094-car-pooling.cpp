class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> dp(1002, 0);
        for(auto x : trips)
        {
            dp[x[1]] += x[0];
            dp[x[2]] -= x[0];
        }
        int sum =0;
        for(int i=0;i<1002;i++)
        {
            sum += dp[i];
            if(sum>capacity) return 0;
        }
        
        return 1;
    }
};