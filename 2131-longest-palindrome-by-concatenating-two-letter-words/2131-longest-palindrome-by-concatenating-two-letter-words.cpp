class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> mp;
        for(auto x : words)
            mp[x]++;
        
        int cnt =0, y =0;
        for(auto x : mp)
        {
            string s = x.first;
            reverse(s.begin(), s.end());
            if(isPalind(s)) {
                if(x.second%2==1)
                y = 1;
             cnt += (x.second/2)*2;}
            else{
                if(mp.count(s))
                {
                    int m = min(mp[s], x.second);
                    cnt += m*2;
                    mp[s] = 0;
                }
            }
            mp[x.first] = 0;
        }
        
        cnt+=y;
        return cnt*2;
    }
    
    bool isPalind(string s)
    {
        string v = s;
        reverse(v.begin(), v.end());
        return v==s;
    }
};