class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> res;
        for(int j=0;j<m;j++)
        {
            
            int k = j, i=0;
          for( i=0;i<n;i++)
            {
              int prv = grid[i][k];
                if(prv==1)
                {
                    if(k+1<m && grid[i][k+1]==1)
                        k+=1;
                    else k=-1;
                }else if(prv==-1)
                {
                    if(k-1>=0 && grid[i][k-1]==-1)
                        k-=1;
                    else k=-1;
                }else k=-1;
              if(k==-1) break;
            }
            res.push_back(k);
        }
        
        
        return res;
    }
};