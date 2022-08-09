class Solution {
public:
    map<int, long long> dp;
    int mod = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
       
        dp[0] =0; dp[1] = 1;
        sort(arr.begin(), arr.end());
         return find(0, arr);
    }
    
    int find(int i, vector<int> &arr)
    {
        if(i>=arr.size()) return 0;
        if(dp.find(arr[i])!=dp.end()) return dp[arr[i]];
        dp[arr[i]] =1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]%arr[j]==0)
            dp[arr[i]] = (dp[arr[i]] +  dp[arr[j]]*dp[arr[i]/arr[j]])%mod;
        }
        return dp[arr[i]] = (dp[arr[i]] + find(i+1, arr))%mod;
    }
};