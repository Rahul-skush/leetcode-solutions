class Solution {
public:
    int findMinDifference(vector<string>& tP) {
        sort(tP.begin(), tP.end());
        int ans = INT_MAX, n = tP.size();
       for(int i = 0;i<n;i++ )
       {
           int diff = abs(findDiff(tP[i], tP[(i-1+n)%n]));
           diff = min(diff, 1440 - diff);
          ans = min(ans, diff);
       }
        
        return ans;
    }
    
    int findDiff(string s1, string s2)
    {
        string s = s1;
        int hh = (s[0]- '0')*10 + s[1] -'0';
        int mm = (s[3] - '0')*10 + s[4] - '0';
       
        s = s2;
        int hh1 = (s[0]- '0')*10 + s[1] -'0';
         int mm1 = (s[3] - '0')*10 + s[4] - '0';
        return (hh-hh1)*60 + (mm - mm1);
    }
};
