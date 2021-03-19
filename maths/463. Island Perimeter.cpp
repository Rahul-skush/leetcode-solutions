class Solution {
public:
    int n, m, cnt =0;
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
       for(int i =0;i<n;i++)
       {
           for(int j =0 ;j<m;j++)
           {
               if(grid[i][j] == 1)
               {
                   if((isValid(i+1, j) && grid[i+1][j]==0) 
                      || !isValid(i+1, j)) cnt++;
                   if((isValid(i-1, j) && grid[i-1][j]==0) 
                      || !isValid(i-1, j)) cnt++;
                   if((isValid(i, j+1) && grid[i][j+1]==0)
                     || !isValid(i, j+1)) cnt++;
                   if((isValid(i, j-1) && grid[i][j-1]==0)
                     || !isValid(i, j-1)) cnt++;
               }
           }
       }
        return cnt;
    }
    
    bool isValid(int i, int j)
    {
        return i>=0 && i<n && j>=0 && j<m;
    }
};
