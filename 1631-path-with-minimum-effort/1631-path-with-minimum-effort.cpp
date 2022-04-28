class Solution {
public:
    using triplet = tuple<int, int, int>;
    vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1, 0}, {-1, 0}};
    int minimumEffortPath(vector<vector<int>>& h) {
       const int n = h.size(), m = h[0].size();
        vector<vector<int>> dist (n, vector<int>(m,INT_MAX));
        dist[0][0]=0;
        priority_queue<triplet, vector<triplet>, greater<triplet>> q;
        q.push({0,0,0});
        while(!q.empty())
        {
            auto [w,i,j] = q.top();
            q.pop();
            
            for(const auto &[di,dj] : dirs)
            {
                if(i+di<0 || i + di>=n || j+dj<0 || j+dj>=m) 
                    continue;
                
                int w2 = max(w, abs(h[i+di][j+dj] - h[i][j]));
                if(w2<dist[i+di][j+dj])
                {
                    dist[i+di][j+dj] = w2;
                    q.push({w2, i+di, j+dj});
                }
            }
        }
        return dist[n-1][m-1];
    }
};