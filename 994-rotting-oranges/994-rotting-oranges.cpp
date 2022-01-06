class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> q;
        int n = grid.size(), m = grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i, j});
            }
        }
        int cnt=-1;
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                vector<int> v= q.front(); q.pop();
                
                for(auto d : dirs)
                {
                    int i = v[0] + d[0], j = v[1] + d[1];
                    if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1)
                    {
                        q.push({i, j});
                        grid[i][j] =2;
                    }
                }
            }
            cnt++;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1) return -1;
            }
        }
        
        return cnt==-1?0:cnt;
            
    }
    
    vector<vector<int>> dirs = {{0,1}, {1, 0}, {-1, 0}, {0, -1}};
};