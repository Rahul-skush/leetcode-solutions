class Solution {
public:
    int n, m;
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
            n = grid.size(), m = grid[0].size();
        queue<vector<int>> pq;
        
        pq.push({0, grid[start[0]][start[1]], start[0], start[1]});
        vector<vector<int>> res;
        
        while(!pq.empty())
        {
            vector<int> t = pq.front(); pq.pop();
            
           int i = t[1];
            if(i!=1 && i>=pricing[0] && i<=pricing[1])
               { res.push_back({t[0], i, t[2], t[3]});
                //cout<<i<<" ";
               }
               grid[t[2]][t[3]] = 0;
            
            for(auto d : dirs)
            {
                int x = d[0] + t[2], y = d[1] + t[3];
                
                if(x>=0 && y>=0 && x<n && y<m && grid[x][y]!=0 )
                {
                    pq.push({t[0]+1, grid[x][y], x, y});
                    grid[x][y] =0;
                }
            }
        }
        sort(res.begin(), res.end());
        vector<vector<int>> ans;
        for(auto y : res)
        {
            ans.push_back({y[2], y[3]}); k--;
               if(k==0) return ans;
        }
        
        return ans;
    }
    
    vector<vector<int>> dirs = {{-1, 0},{0, -1},  {1, 0}, {0, 1}};
};