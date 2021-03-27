class Solution {
public:
    int n, m;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        n = image.size(); m = image[0].size();
        int c = image[sr][sc];
        dfs(sr, sc, image, c);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(image[i][j]==-1) image[i][j] = newColor;
        }
        return image;
    }
    
    void dfs(int i, int j, vector<vector<int>>& image, int c)
    {
        image[i][j] = -1;
        
        for(auto p : dirs)
        {
            int x = i + p.first, y = j + p.second;
            if(x>=0 && x<n && y>=0 && y<m && image[x][y] == c)
                dfs(x, y,  image, c);
        }
    }
    vector<pair<int, int>> dirs = {{0,1}, {1,0}, {-1,0}, {0,-1}};
};
