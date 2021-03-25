class Solution {
public:
    int n, m;
    vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& mat) {
        if(mat.size()==0) return {};
        n = mat.size(), m = mat[0].size();
        vector<vector<int>> pacific(n, vector<int>(m, 0));
        vector<vector<int>> atlantic(n, vector<int>(m, 0));
        for(int j=0;j<m;j++)
        {
            if(pacific[0][j]==0)  dfs(0, j, pacific, mat);   // starting from row 1, cells reachable
            if(atlantic[n-1][j]==0)  dfs(n-1, j, atlantic, mat); //starting from last row cells reachable
        }
        for(int i=0;i<n;i++)
        {
           if(pacific[i][0]==0)  dfs(i, 0, pacific, mat);   // starting from column 1, cells reachable
           if(atlantic[i][m-1]==0)  dfs(i, m-1, atlantic, mat); //starting from last column cells reachable
        }
        
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(pacific[i][j]==atlantic[i][j] && pacific[i][j]==-1)  // overlapping reachable cells are the answers
                    v.push_back({i, j});
        }
        return v;
    }
    
    void dfs(int x, int y, vector<vector<int>>& dummy, vector<vector<int>>& mat)
    {
        if(dummy[x][y]==-1) return ;
        dummy[x][y] = -1;
        for(auto p : dirs)
        {
            int i = x + p.first, j = y + p.second;
            if(i>=0 && j>=0 && i<n && j<m &&  mat[i][j]>=mat[x][y] && dummy[i][j]==0)
                dfs(i, j, dummy, mat);
        }
    }
};
