class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int n = needle.size(); 
        vector<int> lps(n);
        
        int i =0, j=1;
        while(j<n)
        {
            if(needle[i] == needle[j])
            {
                lps[j++] = ++i; 
            }else if(i)
                 i = lps[i-1];
            else lps[j++] = 0;
        }
        
        i =0, j =0;
            int m = haystack.size();
        while(i<m)
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
             if(j==n) return i-n;
           
                if(i<m && haystack[i]!=needle[j])
                    if(j) j = lps[j-1];
            else i++;
          
        }
        
        return -1;
    }
};