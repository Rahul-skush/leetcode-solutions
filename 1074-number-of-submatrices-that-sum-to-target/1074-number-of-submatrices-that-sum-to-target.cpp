class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& mat, int target) {
        int n = mat.size(), m = mat[0].size();
       for(int i=0;i<n;i++)
       {
           for(int j=1;j<m;j++)
               mat[i][j] += mat[i][j-1];
       }
        
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<m;j++)
            {
                mp = {{0,1}};
                int sum = 0;
                for(int k=0;k<n;k++)
                {
                    sum += mat[k][j] - (i>0?mat[k][i-1]:0);
                    ans += mp[sum-target];
                    mp[sum]++;
                }
            }
        }
        return ans;
    }
    
};