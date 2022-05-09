class Solution {
public:
    string shortestPalindrome(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        str = s + '$' + str;
        int n = str.size();
        vector<int> lps(n);
        int i =1;
        while(i<str.size())
        {
            int j = lps[i-1];
            while(j>0 && str[j]!=str[i])
                j = lps[j-1];
            if(str[j]==str[i])
                lps[i] = j+1;
            i++;
        }
        
        str = s.substr(lps[n-1]);
        reverse(str.begin(), str.end());
        str = str + s;
        return str;
        
    }
};