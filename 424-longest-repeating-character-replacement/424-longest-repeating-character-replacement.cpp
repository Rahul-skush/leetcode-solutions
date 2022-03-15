class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans =0;
        for(char c ='A'; c<='Z';c++)
            ans = max(ans, find(s, k, c));
        return ans;
    }
    
    int find(string s, int k, char c)
    {
        int i=0, j =0, cnt =0, ans =0;
        while(j<s.size())
        {
            if(s[j]!=c) cnt++;
            
            while(cnt>k)
            {
                if(s[i]!=c) cnt--;
                i++;
            }
            ans = max(ans, j -i+1);
            j++;
        }
        
          ans = max(ans, j -i);
        
        return ans;
    }
};