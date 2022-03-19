class Solution {
public:
    int n, m;
    int dp[80][80][80];
    int cherryPickup(vector<vector<int>>& grid) {
      n  = grid.size(), m = grid[0].size();
        memset(dp, -1, sizeof(dp));
        
        return find(grid, 0, m-1, 0);
    }
    
    int find(vector<vector<int>>& grid, int c1, int c2, int r)
    {
        if(c1<0 || c2<0 || c1>=m || c2>=m) return INT_MIN;
        if(r==n) return 0;
        if(dp[r][c1][c2]!=-1) return dp[r][c1][c2];
        int x = max({find(grid, c1, c2+1, r+1), find(grid, c1, c2-1, r+1), find(grid, c1, c2, r+1),
                   find(grid, c1-1, c2+1, r+1), find(grid, c1-1, c2-1, r+1), find(grid, c1-1, c2, r+1),
                   find(grid, c1+1, c2+1, r+1), find(grid, c1+1, c2-1, r+1), find(grid, c1+1, c2, r+1)});
        
        if(c1==c2) x += grid[r][c1];
        else x += grid[r][c1] + grid[r][c2];
        
        return  dp[r][c1][c2] =x;
    }
};