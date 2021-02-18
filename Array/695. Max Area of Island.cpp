class Solution {
public:
    int n, m;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         n = grid.size(), m = grid[0].size();
         int ans = 0;
           for(int i =0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   ans = max(ans, findans(grid, i, j));
               }
           }
            return ans;
    }
    
    
    int findans(vector<vector<int>>& grid, int i , int j)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1)
        {
            grid[i][j] =0;
            return (findans(grid, i+1, j) + findans(grid, i-1, j) 
                    + findans(grid, i, j+1) + findans(grid, i, j-1)) + 1;
        }
        return 0;
    }
};
