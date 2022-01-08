class Solution {
public:
    int n, m;
   
    int cherryPickup(vector<vector<int>>& grid) {
      n = grid.size(); m = grid[0].size();
         int dp[n][m][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<m;k++)
                    dp[i][j][k] =-1;
            }
        }
        dp[0][0][m-1] = grid[0][0] + grid[0][m-1];
        int ans =0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<m;k++)
                {
                    if(dp[i-1][j][k]>=0)
                    {
                    
                    for(int d1 : dir)
                    {
                        int c1 =d1 +j;
                        for(int d2: dir)
                        {
                            int c2 = d2+ k;
                            if(c1>=0 && c2>=0 && c1<m && c2<m)
                           { dp[i][c1][c2] = max(dp[i][c1][c2], 
                                                 dp[i-1][j][k]
                        + (c1==c2?grid[i][c1]:grid[i][c1] + grid[i][c2]));
                            if(i==n-1) ans = max(ans, dp[i][c1][c2]);}
                        }
                    }
                    
                    }
                    
                }
            }
        }
        
        return ans;
    }
    
    vector<int> dir = {-1, 0, 1};
};