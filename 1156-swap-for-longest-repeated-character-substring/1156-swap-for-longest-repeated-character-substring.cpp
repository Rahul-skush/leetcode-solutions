class Solution {
public:
    int maxRepOpt1(string text) {
        int ans=0;
        
        for(char c = 'a';c<='z';c++)
        {
            ans = max(ans, find(c, text));
        }
        return ans;
    }
    
    int find(char c, string s)
    {
        int i=0, j =0;
        int cnt =0, ans =0;
        for(char x : s)
            cnt+= x==c;
        int cntdf =0;
        while(j<s.size())
        {
            while(cntdf>1)
            {
                if(s[i]!=c) cntdf--;
                i++;
            }
            
            if(cntdf==1)
            {
                if(j-i<=cnt)
                    ans = max(ans, j-i);
            }else if(cntdf==0)
            {
                  if(j-i+1<=cnt)
                    ans = max(ans, j-i+1);
            } 
            if(s[j]!=c) cntdf++;
            j++;
        }
        if(cntdf==1)
            {
                if(j-i<=cnt)
                    ans = max(ans, j-i);
            }else if(cntdf==0)
            {
                  if(j-i+1<=cnt)
                    ans = max(ans, j-i+1);
            }
        return ans;
    }
};