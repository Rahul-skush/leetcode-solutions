class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        
        for(auto &x: mp)
        {
            sort(x.second.rbegin(), x.second.rend());
        }
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
               mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        
        return mat;
    }
};