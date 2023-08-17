class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<vector<int>> q;
        int n = mat.size(), m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                    q.push({i, j});
                else mat[i][j] = -1;
            }
        }
        int dist = 1;
        while(!q.empty())
        {
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                vector<int> p = q.front(); q.pop();
                for(auto d : dirs)
                {
                     int x = d[0] + p[0], y = d[1] + p[1];
                    if(x>=0 && x<n && y>=0 && y<m && mat[x][y]==-1)
                        {mat[x][y] = dist; q.push({x, y});}
                }
            }
            dist++;
        }
        return mat;
    }
    
    vector<vector<int>> dirs = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
};