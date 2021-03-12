class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.length()<k) return 0;
        map<int, int> mp;
        for(int i=0;i<s.length()-k+1;i++)
        {
            int x = 0, ans =0;
            for(int j=k+i-1;j>=i;j--)
            {
                if(s[j]=='1') ans += pow(2, x);
                x++;
            }
            mp[ans]++;
        }
        int n = pow(2, k);
        if(mp.size()!=n) return 0;
        return 1;
    }
};
