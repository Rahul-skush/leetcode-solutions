class Solution {
public:int n, m;
    int ans =0;
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        n =grid.size(); m = grid[0].size();
        int cnt =0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]==0) cnt++;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                     {find(grid, i, j, cnt);
                return ans;}
            }
        }
        return ans;
    }
    
    void find(vector<vector<int>> grid, int i, int j, int cnt)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==-1) return ;
        //cout<<i<<j<<"="<<cnt<<" ";
        if(grid[i][j]==0) cnt-=1;
        if(grid[i][j]==2 && cnt>0) { return ; }
        if(grid[i][j]==2 && cnt==0) {ans++; return ; }
        grid[i][j] = -1;
         find(grid, i+1, j, cnt);
         find(grid, i-1, j, cnt);
         find(grid, i, j+1, cnt);
         find(grid, i, j-1, cnt);
        
    }
};
