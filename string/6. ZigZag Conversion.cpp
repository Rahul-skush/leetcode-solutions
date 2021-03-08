class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        int v[n][2];
        int x = 2*(n-1), k =0;
        for(int i=x;i>=0;)
            {
            v[k][0] = i; v[k][1] = x - i;
            i-=2; k++;
            }
        v[0][0] = x; v[0][1] = x; v[n-1][0] = x; v[n-1][1] = x;
        string ans;
        for(int i=0;i<n;i++)
        {
                int z = 1, j = i;
                while(j<s.length())
               { z = 1 -z;
                 int t = v[i][z];
                 ans += s[j];
                 j = j+t;
               }
        }
        return ans;
    }
};
