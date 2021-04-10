class Solution {
public:
    int n, m, ans =0;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         ans = 0, n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int l = check(i, j, matrix, dp)+1;
                ans = max(ans, l);
            }
        }
        return ans;
    }
   
    int check(int p, int q, vector<vector<int>>& mat, vector<vector<int>>& dp){
        if(dp[p][q]>0) return dp[p][q];
        int cnt1 =0, cnt2 =0, cnt3 =0, cnt4 = 0; 
            if(isValid(p+1, q) && mat[p+1][q]>mat[p][q])
                cnt1 = check(p+1, q, mat, dp) +1;
            if(isValid(p-1, q) && mat[p-1][q]>mat[p][q])
                cnt2 = check(p-1, q, mat, dp) +1;
            if(isValid(p, q+1) && mat[p][q+1]>mat[p][q])
                cnt3 = check(p, q+1, mat, dp) +1;
            if(isValid(p, q-1) && mat[p][q-1]>mat[p][q])
                cnt4 = check(p, q-1, mat, dp) +1;
        dp[p][q] = max({cnt1, cnt2, cnt3, cnt4});
        return dp[p][q];
    }
 bool isValid(int i, int j)
    {
     return i>=0 && i<n && j>=0 && j<m;
    }
};
