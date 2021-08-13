class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<vector<int>> q;
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!matrix[i][j])
                    q.push({i, j});
            }
        }
        unordered_set<int> r, c;
        while(!q.empty())
        {
            vector<int> v = q.front(); q.pop();
            
            if(r.count(v[0])==0)
            {
                for(int i=0;i<m;i++)
                    matrix[v[0]][i] = 0;
                r.insert(v[0]);
            }
            if(c.count(v[1])==0)
            {
                for(int i=0;i<n;i++)
                    matrix[i][v[1]] = 0;
                c.insert(v[1]);
            }
        }
    }
};
