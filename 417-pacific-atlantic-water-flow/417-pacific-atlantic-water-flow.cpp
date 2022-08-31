class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n = heights.size(), m = heights[0].size();
        vector<vector<int>> mat1(n, vector<int>(m, 0)), mat2(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            dfs(i, 0, heights, mat1);
            dfs(i, m-1, heights, mat2);
        }
        
        for(int i=0;i<m;i++)
        {
            dfs(0, i, heights, mat1);
            dfs(n-1, i, heights, mat2);
        }
        
        
        vector<vector<int>> res;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    if(mat1[i][j] + mat2[i][j]==2) res.push_back({i, j});
            }
        }
        return res;
    }
    private:
    int n, m;
    bool isValid(int i, int j, int x, int y, vector<vector<int>>& heights, vector<vector<int>>& mat)
    {
        if(x<0 || y<0 || x>=n || y>=m || mat[x][y]==1 || heights[x][y]<heights[i][j]) return 0;
        return 1;
    }
    
    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<int>>& mat)
    {
        mat[i][j] =1;
        for(auto d : dirs)
        {
            int x = d[0] + i, y = d[1] + j;
            if(isValid(i, j, x, y, heights, mat))
                dfs(x, y, heights, mat);
        }
    }
    
    vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
};