class Solution {
private : int n, m;
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return -1;
       
        queue<pair<int, int>> q;
        q.push(make_pair(0,0));
        grid[0][0] =1;
        while(!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if(i==n-1 && j==m-1) return grid[i][j];
            for(auto &[dx, dy] : dir)
            {
                int x = dx + i, y = dy + j;
                if(x>=0 && y>=0 && x<n && y<m && grid[x][y]==0)
                    {  
                        q.push(make_pair(x,y));
                        grid[x][y]= grid[i][j] +1;
                    }
            } 
        }
        return -1;
    }
    vector<pair<int, int>> dir  = {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,-1},{-1,1}};
};
