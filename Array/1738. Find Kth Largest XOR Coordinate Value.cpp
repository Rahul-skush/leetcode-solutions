class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int>pq;
        for(int i = 0;i<n;i++)
        {
            for(int j =1;j<m;j++)
                matrix[i][j]^=matrix[i][j-1];
        }
        for(int j =0;j<m;j++)
        {
            for(int i =1;i<n;i++)
                matrix[i][j]^= matrix[i-1][j];
        }
        
        int ans = INT_MIN;
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                pq.push_back(matrix[i][j]);
            }
        }
        sort(pq.rbegin(),pq.rend());
        
        return pq[k-1];
    }
};
