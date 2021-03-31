class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& e) {
        sort(e.begin(), e.end());
        vector<int> dp(e.size(), 1);
        int ans = 1;
        for(int i=0;i<e.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(e[i][0]>e[j][0] && e[i][1]>e[j][1] && dp[i]<1 + dp[j])
                    dp[i] = 1 + dp[j];
                ans = max(dp[i], ans);
            }
        }
        return ans;
    }
};
