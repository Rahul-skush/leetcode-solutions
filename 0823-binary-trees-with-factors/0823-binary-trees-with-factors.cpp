class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size(), mod = 1e9+7;
        sort(arr.begin(), arr.end());
        map<int, int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]] = i;
        
        vector<long> dp(n, 0);
        dp[0] = 1;
        int ans =1;
        for(int i=1;i<n;i++)
        {
            for(int j =0;j<i;j++)
            {
                int x = arr[i], y = arr[j];
                if(x%y==0 && mp.find(x/y)!=mp.end())
                {
                    if(x!=y)
                        dp[i] = (dp[i] +  (dp[mp[x/y]]*dp[j])%mod)%mod;
                    else dp[i] =(dp[i] + dp[j])%mod;
                }
            }
            dp[i] = (dp[i] + 1)%mod;
            ans =(ans + dp[i])%mod;
        }
        return ans;
    }
};
