class Solution {
public:
    int maxScore(string s) {
        int cnt1 = 0, cnt0 = 0, ans =0;
        for(auto c :  s)
            if(c=='1') cnt1++;
        
        for(int i=0;i<s.size()-1;i++)
        {
            char c = s[i];
            if(c=='1') cnt1--;
            else cnt0++;
            ans = max(ans, cnt1 + cnt0);
        }
        return ans;
    }
};