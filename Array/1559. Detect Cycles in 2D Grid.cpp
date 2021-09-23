class Solution {
public:
    int n, m;
    bool containsCycle(vector<vector<char>>& grid) {
        
         n = grid.size(), m = grid[0].size();
        
        
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]>='a' && grid[i][j]<='z')
                    {
                        if(dfs(grid, i, j, grid[i][j], '0'))
                        {
                            return true;
                        }
                            
                    }
                }
        }
        
        
        return false;
    }
    
    bool dfs(vector<vector<char>> &grid, int i, int j, char c, char d)
    {
        if(i<0 || j<0 || i>=n || j>=m) return false;
        char x = 'A' + (c-'a');
        if(grid[i][j]==x) return true;
        if(grid[i][j]!=c) return false;
        grid[i][j] = x;
        
        if(d=='0')
        {
            return dfs(grid, i+1, j, c, 'd') || dfs(grid, i, j+1, c, 'r')
                      || dfs(grid, i, j-1, c, 'l') || dfs(grid, i-1, j, c, 'u');
        }
        
         if((d=='d') 
            && (dfs(grid, i+1, j, c, 'd') || dfs(grid, i, j+1, c, 'r')
                      || dfs(grid, i, j-1, c, 'l'))) return true;
         if((d=='u') 
            && (dfs(grid, i-1, j, c, 'u') || dfs(grid, i, j+1, c, 'r')
                      || dfs(grid, i, j-1, c, 'l'))) return true;
         if((d=='r') 
            && (dfs(grid, i+1, j, c, 'd') || dfs(grid, i, j+1, c, 'r')
                      || dfs(grid, i-1, j, c, 'u'))) return true;
         if((d=='l') 
            && (dfs(grid, i+1, j, c, 'd') || dfs(grid, i-1, j, c, 'u')
                      || dfs(grid, i, j-1, c, 'l'))) return true;
       
        return false;
    }
};
