class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<int> res(m, -1);
        for(int x=0;x<m;x++)
        {
            int j = x, f =0;
            for(int i=0;i<n;i++)
            {
                int k = j;
                if(grid[i][j] == 1)
                    k +=1;
                else k -=1;
                if(k<0 || k>=m) { f =1; break;}
                if(grid[i][k]!=grid[i][j])
                    { f =1; break;}
                j = k;
            }
            if(f==0) res[x]  = j;
        }
        
        
        return res;
    }
};
