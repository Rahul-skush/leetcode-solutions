class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int n = og.size(), m= og[0].size();
        if(og[0][0] || og[n-1][m-1]) return 0;
        
        for(auto &x : og)
            for(auto &y : x)
                if(y) y = -1;
        
        og[0][0]= 1;
        for(int i=1;i<n;i++)
            if(og[i][0]==0)
            og[i][0] = og[i-1][0];
        for(int j =1;j<m;j++)
            if(og[0][j]==0)
            og[0][j] = og[0][j-1];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(og[i][j]==-1) continue;
                if(og[i-1][j]==-1 && og[i][j-1]==-1) og[i][j] = -1;
                og[i][j] = og[i-1][j]!=-1?og[i-1][j]:0;
                og[i][j] += og[i][j-1]!=-1?og[i][j-1]:0;
            }
        }
        return og[n-1][m-1];
    }
};
