class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        
     int cnt = n*m;
        int k =0;
        vector<int> v;
        
        while(cnt)
        {
            for(int i=k;i<=m-k-1;i++)
                {v.push_back(matrix[k][i]); cnt--;}
            if(cnt==0) return v;
            for(int i=k+1;i<=n-k-1;i++)
                {v.push_back(matrix[i][m-k-1]); cnt--;}
            if(cnt==0) return v;
            for(int i=m-k-2;i>=k;i--)
                {v.push_back(matrix[n-k-1][i]); cnt--;}
            if(cnt==0) return v;
            for(int i=n-k-2;i>=k+1;i--)
                {v.push_back(matrix[i][k]); cnt--;}
            if(cnt==0) return v;
            k++;
        }
        return v;
    }
};
