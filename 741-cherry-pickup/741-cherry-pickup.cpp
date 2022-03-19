class Solution {
public:
    int n, m;
    int dp[51][51][51][51];
    int cherryPickup(vector<vector<int>>& grid) {
      n  = grid.size(), m = grid[0].size();
        memset(dp, -1, sizeof(dp));
        
        long ans = find(grid, 0, 0, 0, 0);
        if(ans<0) return 0;
        return ans;
    }
    
    long find(vector<vector<int>>& grid, int r1, int c1, int r2, int c2)
    {
        if(!isValid(r1, c1) || !isValid(r2, c2) || grid[r1][c1]==-1 || grid[r2][c2]==-1) return INT_MIN;
        if(r1==n-1 && c1==m-1) return grid[r1][c1];
        if(dp[r1][c1][r2][c2]!=-1) return dp[r1][c1][r2][c2];
        long x = max({find(grid,r1 + 1, c1, r2+1, c2), find(grid, r1+1, c1, r2, c2+1),
                   find(grid, r1, c1+1, r2+1, c2), find(grid, r1, c1+1, r2, c2+1)});
        
        if(c1==c2 && r1==r2) x += grid[r1][c1];
        else x += grid[r1][c1] + grid[r2][c2];
        
        return  dp[r1][c1][r2][c2] =x;
    }
    
    bool isValid(int i, int j)
    {
        return i>=0 && j>=0 && i<n && j<m;
    }
};