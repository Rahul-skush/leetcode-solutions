class NumMatrix {
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& matrix) {
        for(auto x : matrix)
        {
           v.push_back(x);
        }
        
        int n = v.size(), m = v[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
                v[i][j] += v[i][j-1];
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
                v[j][i] += v[j-1][i];
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return v[row2][col2] +
            ((row1-1>=0 && col1-1>=0)? v[row1-1][col1-1]:0) - 
            ((row1-1>=0 && col2>=0)? v[row1-1][col2]:0) -
            ((row2>=0 && col1-1>=0)? v[row2][col1-1]:0);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */