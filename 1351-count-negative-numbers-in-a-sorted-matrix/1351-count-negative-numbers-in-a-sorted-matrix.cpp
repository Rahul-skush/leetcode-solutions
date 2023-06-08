class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int  i =0, j = m-1, sum =0;
        
        while(j>=0 && i<n)
        {
            if(grid[i][j]<0) j--;
            else{
                sum += j+1;
                i++;
            }
        }
        
        return n*m - sum;
    }
};