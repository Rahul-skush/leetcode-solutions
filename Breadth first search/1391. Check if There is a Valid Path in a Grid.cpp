class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m , 0));
        queue<vector<int>> q;
        q.push({0, 0});
        
        while(!q.empty())
        {
            vector<int> v = q.front(); q.pop();
            vis[v[0]][v[1]] = 1;
            if(v[0]==n-1 && v[1]==m-1) return 1;
            int x = grid[v[0]][v[1]];
            if(x==1)
            {
                int i = v[0], j =v[1];
                if(j-1>=0 && vis[i][j-1]==false &&
                   (grid[i][j-1]==4 || grid[i][j-1]==6 || grid[i][j-1]==1))
                    q.push({i, j-1});
                if(j+1<m && vis[i][j+1]==false
                   && (grid[i][j+1]==3 || grid[i][j+1]==5 || grid[i][j+1]==1))
                    q.push({i, j+1});
            }else if(x==2)
            {
                int i = v[0], j =v[1];
                if(i-1>=0 && vis[i-1][j]==false && 
                   (grid[i-1][j]==2 || grid[i-1][j]==3 || grid[i-1][j]==4))
                    q.push({i-1, j});
                if(i+1<n && vis[i+1][j]==false &&
                  (grid[i+1][j]==2 || grid[i+1][j]==5 || grid[i+1][j]==6))
                    q.push({i+1, j});
            }else if(x==3)
            {
                int i = v[0], j =v[1];
                if(j-1>=0 && vis[i][j-1]==false &&
                  (grid[i][j-1]==4 || grid[i][j-1]==6 || grid[i][j-1]==1 ))
                    q.push({i, j-1});
                if(i+1<n && vis[i+1][j]==false &&
                  (grid[i+1][j]==2 || grid[i+1][j]==5 || grid[i+1][j]==6))
                    q.push({i+1, j});
            }else if(x==4)
            {
                int i = v[0], j =v[1];
                if(j+1<m && vis[i][j+1]==false
                   && (grid[i][j+1]==3 || grid[i][j+1]==5 || grid[i][j+1]==1))
                    q.push({i, j+1});
                if(i+1<n && vis[i+1][j]==false &&
                  (grid[i+1][j]==2 || grid[i+1][j]==5 || grid[i+1][j]==6))
                    q.push({i+1, j});
            }else if(x==5)
            {
                int i = v[0], j =v[1];
                if(i-1>=0 && vis[i-1][j]==false && 
                   (grid[i-1][j]==2 || grid[i-1][j]==3 || grid[i-1][j]==4))
                    q.push({i-1, j});
                if(j-1>=0 && vis[i][j-1]==false  &&
                  (grid[i][j-1]==4 || grid[i][j-1]==6 || grid[i][j-1]==1 ))
                    q.push({i, j-1});
            }else if(x==6)
            {
                int i = v[0], j =v[1];
                if(i-1>=0 && vis[i-1][j]==false && 
                   (grid[i-1][j]==2 || grid[i-1][j]==3 || grid[i-1][j]==4))
                    q.push({i-1, j});
                if(j+1<m && vis[i][j+1]==false  
                   && (grid[i][j+1]==3 || grid[i][j+1]==5 || grid[i][j+1]==1))
                    q.push({i, j+1});
            }
        }
        return 0;
    }
};
