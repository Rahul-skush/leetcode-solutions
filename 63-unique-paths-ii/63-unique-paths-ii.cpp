class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        vector<int> prv(m, 0);
        if(obstacleGrid[0][0]) prv[0] = -1;
        else prv[0] =1;
        for(int j=1;j<m;j++)
            prv[j] = (prv[j-1]==-1 || obstacleGrid[0][j]==1)?-1:1;
        
        for(int i=1;i<n;i++)
        {
            vector<int> tmp(m, 0);
            for(int j=0;j<m;j++)
            {
                if(obstacleGrid[i][j]==1) {tmp[j] = -1; continue;}
                if(j==0)
                {
                    tmp[0] = prv[0];
                }else{
                    tmp[j] = prv[j]!=-1?prv[j]:0;
                    tmp[j] += tmp[j-1]!=-1?tmp[j-1]:0;
                }    
            }
            
            swap(prv, tmp);
        }
        
        return prv[m-1]==-1?0:prv[m-1];
    }
};