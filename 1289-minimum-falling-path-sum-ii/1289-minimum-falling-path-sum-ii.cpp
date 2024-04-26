class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), ans = INT_MAX;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mn = INT_MAX;
                for(int k=0;k<n;k++)
                {
                    if(k!=j)
                    mn = min(mn, grid[i][j] + grid[i-1][k]);
                }
                grid[i][j] = mn;
            }
        }
        
        for(int i=0;i<n;i++)
            {
                ans = min(ans, grid[n-1][i]);
            }
        
        return ans;
    }
};