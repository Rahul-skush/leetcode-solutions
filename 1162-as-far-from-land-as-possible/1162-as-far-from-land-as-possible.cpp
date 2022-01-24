class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<vector<int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]) q.push({i, j});
            }
        }
        if(q.size()==n*n) return -1;
        if(q.size()==0) return -1;
        int level =0;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
                vector<int> v = q.front(); q.pop();
                for(auto d : dirs)
                {
                    int i = v[0] +d[0], j = v[1]+d[1];
                    if(i>=0 && j>=0 && i<n && j<n && grid[i][j]==0)
                        {q.push({i, j}); grid[i][j] =1;}
                }
            }
            level++;
        }
        
        return level-1;
    }
    
    vector<vector<int>> dirs = {{0,1}, {1, 0}, {-1, 0}, {0,-1}};
};