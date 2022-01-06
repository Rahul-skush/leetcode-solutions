class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> q;
        int n = grid.size(), m = grid[0].size(), cnt1 =0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i, j});
                if(grid[i][j]==1) cnt1++;
            }
        }
        
        if(cnt1==0) return 0;
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
                        cnt1--;
                    }
                }
            }
            cnt++;
        }
        
        
        return cnt1!=0?-1:cnt;
            
    }
    
    vector<vector<int>> dirs = {{0,1}, {1, 0}, {-1, 0}, {0, -1}};
};