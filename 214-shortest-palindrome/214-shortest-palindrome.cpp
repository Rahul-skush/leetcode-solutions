class Solution {
public:
    string shortestPalindrome(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        str = s + '#' + str;
        int n = str.size();
        vector<int>lps(n, 0);
        
        int i=1;
        while(i<n)
        {
           int j = lps[i-1];
            while(j>0 && str[i]!=str[j])
                j = lps[j-1];
            
            if(str[i]==str[j])
                lps[i] = j+1;
            i++;
        }
        str = s.substr(lps[n-1]);
        reverse(str.begin(), str.end());
        return str + s;
    }
};