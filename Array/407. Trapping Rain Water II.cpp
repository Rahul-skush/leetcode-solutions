class Solution {
public:
    int n, m;
    int trapRainWater(vector<vector<int>>& heightMap) {
        n= heightMap.size(), m = heightMap[0].size();
        int ans =0;
       
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        
        for(int i=0;i<n;i++)
            {pq.push({heightMap[i][0], i, 0}),  pq.push({heightMap[i][m-1], i, m-1});
            vis[i][0] =1; vis[i][m-1] =1;
            }
        
        for(int i=1;i<m-1;i++)
            {pq.push({heightMap[0][i], 0, i}),  pq.push({heightMap[n-1][i], n-1, i});
            vis[0][i]=1; vis[n-1][i]=1;}
    int minBdht =0;
        while(!pq.empty())
        {
            vector<int> v= pq.top(); pq.pop();
            minBdht = max(minBdht, v[0]);
            for(auto p : dirs)
            {
                int x = p[0] + v[1], y =p[1] + v[2];
                
                if(x>=0 && x<n && y>=0 && y<m && vis[x][y]==0)
                {if(minBdht>=heightMap[x][y]) ans += minBdht - heightMap[x][y];
                 vis[x][y] =1;
                pq.push({heightMap[x][y], x, y});}
            }
        }
        return ans;
        
    }
    vector<vector<int>> dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    
};
