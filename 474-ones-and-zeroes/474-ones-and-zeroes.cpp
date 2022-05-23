class Solution {
public:
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp, -1, sizeof(dp));
        return find(strs, 0, m, n);
    }
    
    int find(vector<string>& strs, int i, int m, int n)
    {
        if(m<0 || n<0)  return INT_MIN;
        if(m==0 && n==0) return 0;
        if(i==strs.size()) return 0;
        if(dp[i][m][n]!=-1) return dp[i][m][n];
        int cnt =0;
        for(auto x : strs[i])
            cnt+=x=='1';
        return dp[i][m][n] = max(find(strs, i+1, m - (strs[i].size()-cnt), n - cnt)+1, find(strs, i+1, m, n));
    }
};