class Solution {
public:
    int countSubstrings(string s) {
        int n  = s.length(), cnt =0;
        vector<vector<int>> v(n, vector<int> (n, 0));
    
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=i;j--)
            {
                if(s[i]==s[j] && abs(i-j)<=1)
                    v[i][j] = 1;
                else
                if(i+1<n && j-1>=0 && s[i]==s[j] && v[i+1][j-1]==1)
                    {v[i][j] =1; }
                if(v[i][j]) cnt++;
            }
        }
        return cnt;
    }
};
