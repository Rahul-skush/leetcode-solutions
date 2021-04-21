class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n = tri.size()-1;
        vector<int> v (tri[n].begin(), tri[n].end());
       
        while(--n>=0)
        {
             vector<int> tmp(tri[n].size());
            for(int i=0;i<tri[n].size();i++)
            {
                tmp[i] = tri[n][i] +  min(v[i], v[i+1]);
            }
            swap(v, tmp);
        }
        return v[0];
    }
};
