class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
       int m = matrix[0].size();
        int l = 0, h = m*n-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
           int  i = mid/m, j = mid%m;
            if(matrix[i][j]>target) h = mid-1;
            else if(matrix[i][j]<target) l = mid+1;
            else return true;
        }
        return false;
       
    }
};