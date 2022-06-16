class Solution {
public:
    string longestPalindrome(string s) {
        int ans =0;
        string str;
        for(int i=0;i<s.size();i++)
        {
            int j = i, k =i;
            while(j>=0 && s[j]==s[i]) j--;
            while(k<s.size() && s[k]==s[i])k++;
            
            while(j>=0 && k<s.size() && s[j]==s[k])
                j--, k++;
            
            if(k!=i) k-=1;
            if(j!=i) j+=1;
            
            if(k-j+1>ans)
            {
                ans = k-j+1;
                str = s.substr(j, k-j+1);
            }
        }
        return str;
    }
};