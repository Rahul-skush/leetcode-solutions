class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        k = (k)%(m*n);
        if(k==0) return grid;
        vector<vector<int>> v(n, vector<int>(m, 0));
        int l =0, f =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              int nx = (j + k)%m;
                int ny = (i + (j+k)/m)%n;
               v[ny][nx] = grid[i][j];
            }
        }
       
        return v;
    }
    };
