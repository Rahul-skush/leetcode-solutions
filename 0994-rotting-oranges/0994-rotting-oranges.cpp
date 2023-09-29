class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> q;
        int n = grid.size(), m = grid[0].size();
        int cntFreshOrange = 0, time =0;
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i, j, 0});
                if(grid[i][j]==1)
                 cntFreshOrange +=1;   
            }
        }
        if(cntFreshOrange==0) return 0;
        
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                vector<int> v = q.front(); q.pop();
                for(auto d :  dirs)
                {
                    int i = d[0] + v[0], j = d[1] + v[1];
                    if(isValid(i, j, n, m, grid))
                        {
                        q.push({i, j, v[2]+1}); 
                        grid[i][j] = 2;
                        cntFreshOrange-=1;
                    }
                }
            }
            time+=1;
        }
        
        if(cntFreshOrange==0) return time-1;
        return -1;
    }
    
    vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    
    bool isValid(int i, int j, int n, int m, vector<vector<int>> &grid)
    {
        return i>=0 && j>=0 && i<n && j<m && grid[i][j]==1;
    }
};