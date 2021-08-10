class Solution {
public:
    int minFlipsMonoIncr(string s) {
        vector<int> v(s.size(), 0);
        v[0] = s[0] - '0';
        for(int i=1;i<s.size();i++)
            v[i] = (s[i]-'0') + v[i-1];
        int cnt =0, ans = v.back();
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0') cnt++;
            int x = i-1>=0?v[i-1]:0;
            ans = min(ans, x + cnt);
        }
        return ans;
    }
};
