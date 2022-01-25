class Solution {
public:
    int n, m, f1=0, f2=0;
    set<vector<int>> st;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)     {
        n = heights.size(), m =heights[0].size();
        vector<vector<int>> vis1(n, vector<int>(m, 0));
        vector<vector<int>> vis2(n, vector<int>(m, 0));
        queue<vector<int>> q;
        for(int i=0;i<n;i++)
            {q.push({i, 0}); vis1[i][0]=1;}
        for(int i=0;i<m;i++)
            {q.push({0, i}); vis1[0][i]=1;}
        
        while(!q.empty())
        {
            vector<int> v = q.front(); q.pop();
            for(auto d : dirs)
            {
                int i = v[0] + d[0], j = v[1]+d[1];
                if(isValid(i, j) && heights[i][j]>=heights[v[0]][v[1]] 
                   && vis1[i][j]==0)
                    {q.push({i, j}); vis1[i][j]=1;}
            }
        }
        
        for(int i=0;i<m;i++)
            {q.push({n-1, i}); vis2[n-1][i]=1;}
        for(int i=0;i<n;i++)
            {q.push({i, m-1}); vis2[i][m-1]=1;}
        
        while(!q.empty())
        {
            vector<int> v = q.front(); q.pop();
            for(auto d : dirs)
            {
                int i = v[0] + d[0], j = v[1]+d[1];
                if(isValid(i, j) && heights[i][j]>=heights[v[0]][v[1]] 
                   && vis2[i][j]==0)
                    {q.push({i, j}); vis2[i][j]=1;}
            }
        }
        
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(vis1[i][j] + vis2[i][j]==2)
                    v.push_back({i, j});
        }
        
        return v;
    }
    
    vector<vector<int>> dirs = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};
    
    bool isValid(int i, int j)
    {
        return i>=0 && j>=0 && i<n && j<m;
    }
};