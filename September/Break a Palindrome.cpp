class Solution {
public:
    string breakPalindrome(string s) {
        
        string ans = "";
        int n = s.size();
        for(int i=0;i<s.size();i++)
        {
            if(n%2 && i==n/2) continue;
            
            for(int j=0;j<26;j++)
            {
                char c = s[i];
                if('a'+j==c) continue;
                s[i] = 'a' + j;
                if(ans.size()==0) ans = s;
                ans = min(ans, s);
                s[i] = c;
            }
        }
        
        return ans!=s?ans:"";
        
    }
};
