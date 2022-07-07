class Solution {
public:
    int n, m;
    bool isInterleave(string s1, string s2, string s3) {
         n= s1.size(), m = s2.size();
        if(n+m!=s3.size()) return 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return find(0, 0, s1, s2, s3, dp);
    }
    
    int find(int i, int j, string &s1, string &s2, string &s3, vector<vector<int>>& dp)
    {
        if(i>=n && j>=m) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans =0, k = i+j;
        if(i<n && s1[i]==s3[k])
            ans |= find(i+1, j, s1, s2, s3, dp);
        if(j<m && s2[j]==s3[k])
            ans |= find(i, j+1, s1, s2, s3, dp);
        
        return dp[i][j] = ans;
            
    }
};