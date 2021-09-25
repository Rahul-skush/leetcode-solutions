class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m= grid[0].size();
        if(m*n==1) return 0;
        vector<vector<int>> vis(n, vector<int>(m, -1));
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, 0, 0, k});
        while(!pq.empty())
        {
            vector<int> v = pq.top(); pq.pop();
            
            int i = v[1], j = v[2];
            if(i<0 || j<0 || i>=n || j>=m) continue;
            
            if(i==n-1 && j==m-1) return v[0];
            
            if(grid[i][j]==1)
                v[3] -=1;
            if(v[3]<0) continue;
             if(vis[i][j]!=-1 && vis[i][j]>=v[3])
                continue;
            vis[i][j] = v[3];
            
            pq.push({v[0]+1, i+1, j, v[3]});
            pq.push({v[0]+1, i-1, j, v[3]});
            pq.push({v[0]+1, i, j+1, v[3]});
            pq.push({v[0]+1, i, j-1, v[3]});
            
        }
        return -1;
    }
    
    vector<vector<int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1, 0}};
};
