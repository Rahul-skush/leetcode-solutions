class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j])
                    ans += helper(i, j, n, m, mat);
            }
        }
        return ans;
    }
    
    int helper(int x, int y, int n, int m,vector<vector<int>>& mat)
    {
        int cnt = 0, bound = m;
        for(int i=x;i<n;i++)
        {
            for(int j=y;j<bound;j++)
            {
                if(mat[i][j]) cnt++;
                else bound = j;
            }
        }
        return cnt;
    }
};
