class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        find(0, 0, nums1, nums2, n, m,  dp);
        //cout<<ans<<endl;
        if(ans>0)
        return ans;
        
        int mx = INT_MIN, mn = INT_MAX;
        for(auto x :  nums1)
            mn = min(mn, x);
        
        for(auto x : nums2)
            mx = max(mx, x);
        
        ans = mx*mn;
        
        mx = INT_MIN, mn = INT_MAX;
        for(auto x :  nums1)
            mx = max(x, mx);
        for(auto x : nums2)
            mn = min(x, mn);
        return max(ans, mx*mn);
    }
private: int ans = 0;
    int find(int i, int j, vector<int> &nums1, vector<int> &nums2, int n, int m, vector<vector<int>> &dp)
    {
        if(i==n || j==m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int tempProduct = max({
                 find(i+1, j+1, nums1, nums2, n, m, dp) + nums1[i]*nums2[j],
                 find(i+1, j, nums1, nums2, n, m, dp),
                 find(i, j+1, nums1, nums2, n, m,  dp),
                 find(i+1, j+1, nums1, nums2, n, m,  dp)
                });
        dp[i][j] = tempProduct;
        ans = max(ans, dp[i][j]);
        return dp[i][j];
    }
};