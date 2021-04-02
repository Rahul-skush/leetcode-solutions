class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> v(m+1, vector<int>(n+1,0));
        for(auto s : strs)
        {
            int cnt = s.length();
            for(auto c : s)
                if(c=='0') cnt--;
            int z = s.length() - cnt;
            
            for(int i=m;i>=z;i--)
            {
                for(int j=n;j>=cnt;j--)
                    v[i][j] = max(v[i][j], v[i - z][j-cnt] +1);
            }
        }
        return v[m][n];
    }
};
