class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int k = 0, n = mat.size() ;
         for(int k =0;k<n/2;k++)
         {
        vector<int> tmp;
           
       for(int j=k;j<n-k;j++)
           tmp.push_back(mat[k][j]);
        for(int i=k+1;i<n-k;i++)
            tmp.push_back(mat[i][n-k-1]);
        for(int j=n-k-2;j>=k;j--)
            tmp.push_back(mat[n-k-1][j]);
        for(int i=n-k-2;i>=k+1;i--)
            tmp.push_back(mat[i][k]);
        
       int x = 0;
        
        for(int i=k;i<n-k;i++)
            mat[i][n-k-1]=tmp[x++];
        for(int j=n-k-2;j>=k;j--)
            mat[n-k-1][j]=tmp[x++];
        for(int i=n-k-2;i>=k;i--)
            mat[i][k]=tmp[x++];
         for(int j=k+1;j<n-k-1;j++)
           mat[k][j] = tmp[x++];
         }
        
    }
};
