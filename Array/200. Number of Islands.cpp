class Solution {
private  :  int n, m, ans =0;
public:
    int numIslands(vector<vector<char>>& grid) {
         n = grid.size(), m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(grid[i][j] =='1')
                    {ans +=1;
                dfs(grid, i,j) ;}
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1')
        {
            grid[i][j] = '2';
             dfs(grid, i +1, j);
             dfs(grid, i-1, j); 
             dfs(grid, i, j+1);
             dfs(grid, i, j-1);
        }
    }
};
