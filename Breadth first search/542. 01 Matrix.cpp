class Solution {
public:
    int n =0, m = 0;
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
         n = matrix.size(), m = matrix[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, -1));
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        
        while(!q.empty())
        {
            int i = q.front().first, j = q.front().second;
        q.pop();
            for(auto d : dirs)
            {
                int x = i + d.first, y = j + d.second;
                if(isValid(x, y) && dist[x][y]==-1)
                {
                    dist[x][y] =  dist[i][j] +1;
                    q.push({x, y});
                }
            }
        }
        return dist;
    }
    bool isValid(int i, int j)
    {return i>=0 && i<n && j>=0 &&j<m;}
    vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1, 0}, {-1, 0}};
};
