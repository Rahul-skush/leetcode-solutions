class Solution {
public:
    int countBinarySubstrings(string s) {
       char c = s[0];
        int cnt1 = 0, cnt2 = 0, i = 0, ans =0, n = s.length();
        while(i<n && s[i]==c){ cnt1++; i++;}
        while(i<n)
        {
            int cnt2 = 0;
            while(i<n && s[i]!=c) { i++; cnt2++;}
            ans += min(cnt1, cnt2);
            c = s[i-1];
            cnt1 = cnt2; 
        }
        return ans;
    }
};
