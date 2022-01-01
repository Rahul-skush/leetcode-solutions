class Solution {
public:
    int maxCoins(vector<int>& nums) {
       
        vector<int>v;
        v.push_back(1);
        for(auto x : nums)
             v.push_back(x);
        
        v.push_back(1);
        int n = v.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int k=2;k<n;k++)
        {
            for(int left =0;left<n-k;left++)
            {
                int right = left +k;
                for(int i=left+1;i<right;i++)
                    dp[left][right] = max(dp[left][right],
                        v[left]*v[i]*v[right] + dp[left][i] + dp[i][right]);
            }
        }
        
        return dp[0][n-1];
    }
    

};