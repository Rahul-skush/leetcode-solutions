class Solution {
public:
    int n, m;
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         n = grid.size(), m = grid[0].size();
        int l =0, h = n*m-1;
        k = k%(n*m);
        if(h==0) return grid;
        reverse(l, h, grid);
        reverse(l, k-1, grid);
        reverse(k, h, grid);
        
        return grid;
    }
    
    void reverse(int l, int h, vector<vector<int>>& grid)
    {
        while(l<h)
        {
            int i1 = l/m, j1 = (l%m);
            int i2 = h/m, j2 = (h%m);
            
            swap(grid[i1][j1], grid[i2][j2]);
            l++;
            h--;
        }
    }
};