class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m =mat[0].size();
        
       if(n==1 && m==1) return {0, 0};
            for(int j=0;j<n;j++)
            {
                int s =0, e =m-1;
                while(s<e)
                {
                    int mid = s + (e-s)/2;
                    if(mat[j][mid+1]<mat[j][mid]) e =mid;
                    else s =mid+1;
                }
                
                if(j==0)
                {
                    if(mat[j][s]>mat[j+1][s]) return {j, s};
                }else if(j==n-1)
                {
                    if(mat[j][s]>mat[j-1][s]) return {j, s};
                }
                else if(mat[j][s]>mat[j-1][s] && mat[j][s]>mat[j+1][s]) return {j, s};
            }
        
        return {0, 0};
    }
};
