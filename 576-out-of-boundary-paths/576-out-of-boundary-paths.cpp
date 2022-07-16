class Solution {
public:
    int mod = 1e9+7;
   int dp[51][51][51];
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp, -1, sizeof(dp));
       return  find(startRow, startColumn, m, n,  maxMove);
        
    }
    
    long long find(int i, int j, int m, int n,  int move)
    {
        
        if(i<0 || j<0 || i>=m || j>=n) return 1;
        if(move<=0) return 0;
        if(dp[i][j][move]!=-1) return dp[i][j][move];
        return dp[i][j][move] = (find(i+1, j, m, n,  move-1) + 
                          find(i-1, j, m, n,  move-1) + 
                          find(i, j+1, m, n,  move-1) + 
                          find(i, j-1, m, n,  move-1))%mod ;
    }
};