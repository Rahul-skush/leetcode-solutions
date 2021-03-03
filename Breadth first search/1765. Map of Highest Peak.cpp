class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>> v;
        int n = isWater.size(), m = isWater[0].size();
        int cnt =0;
        vector<vector<int>> p;
        for(int i = 0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(isWater[i][j]==1)
                    {isWater[i][j] = 0; cnt++;
                    p.push_back({i,j, 0});}
                else
                    isWater[i][j] = -1;
            }
        }
        
        while(p.size()!=0)
        {
            int V = p.size();
            vector<vector<int>> v;
            for(int i =0;i<V;i++)
            {
                int x1 = p[i][0], y1 = p[i][1], s = p[i][2];
                for(auto &[x,y] : dir)
                    {
                        int k = x + x1, l = y + y1;
                        if(k>=0 && k<n && l>=0 && l<m && isWater[k][l]==-1)
                            {isWater[k][l] =s+1; cnt++;
                            v.push_back({k, l, s+1});
                            }
                    }
            }
            swap(v, p);
        }
        
       
        return isWater;
    }
    vector<pair<int, int>> dir = {{0,1}, {1, 0}, {-1, 0}, {0, -1}};
};
