class Solution {
public:
    int n, m;
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
         n = M.size(), m = M[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                pair<float, float> p = check(i, j, M);
                v[i][j] = floor(p.first/p.second);
            }
        }
        return v;
    }
   pair<float, float> check(int i, int j, vector<vector<int>>& M)
    {
        float cnt1 =0, cnt2= 0;
        for(auto p : dirs)
        {
            int x = i + p.first, y = j + p.second;
            if(x>=0 && x <n && y>=0 && y<m) 
              {  cnt2++;
             cnt1+= M[x][y];}
        }
       
        return {cnt1 + M[i][j], cnt2+1};
    }
    
    vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1,1}, {1,-1}, {-1,1}, {-1,-1}, 
                                   {1, 0}, {-1,0}};
};
