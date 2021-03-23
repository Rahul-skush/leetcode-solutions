class Solution {
public:
    int nx=0, ny=0;
    int orangesRotting(vector<vector<int>>& grid) {
         nx = grid.size(), ny = grid[0].size();
        queue<vector<int>> q;
        int cnt = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
               { if(grid[i][j]==2) q.push({i, j, 0});
            if(grid[i][j]==0) cnt++;}
        }
        if(nx*ny == cnt) return 0;
      int  n = q.size();
        int k = -1;
        while(!q.empty())
        {
            int ns = q.size();
            for(int x=0;x<ns;x++)
            {
                 vector<int> v = q.front(); q.pop();
                int  i =v[0], j = v[1], w = v[2];
                if(isValid(i-1, j) && grid[i-1][j]==1) 
                {q.push({i-1, j, k}); n++; grid[i-1][j]=2;}
                
                if(isValid(i+1, j) && grid[i+1][j]==1)
                {q.push({i+1, j, k}); n++; grid[i+1][j]=2;}
                
                if(isValid(i, j-1) && grid[i][j-1]==1)
                {q.push({i, j-1, k}); n++; grid[i][j-1]=2;}
                
                if(isValid(i, j+1) && grid[i][j+1]==1)
                {q.push({i, j+1, k}); n++; grid[i][j+1]=2;}
            }
            k++;
        }
        
        if((nx*ny - cnt)>n) return -1;
        return k;
    }
    
    bool isValid(int i, int j)
    {
        return i>=0 && i<nx && j>=0 && j<ny;
    }
};
