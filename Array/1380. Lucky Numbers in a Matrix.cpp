class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x = 0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][x]>mat[i][j])
                    x = j;
            }
            
            int f = 0;
            for(int j =0;j<n;j++)
            {
                if(i!=j && mat[j][x]>mat[i][x]) {f = 1; break;}
            }
            if(!f) v.push_back(mat[i][x]);
        }
        return v;
    }
};
