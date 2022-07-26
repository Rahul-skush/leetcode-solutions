class Solution {
public:
    string shortestPalindrome(string s) {
       string str =s;
        reverse(str.begin(), str.end());
        str = s + "$" + str;
        int n = str.size();
        vector<int> LPS(str.size(), 0);
        for(int i=1;i<str.size();i++)
        {
            int j = LPS[i-1];
            while(j>0 && str[j]!=str[i])
                j = LPS[j-1];
            if(str[j]==str[i])
                LPS[i] = j+1;
        }
        str = s.substr(LPS[n-1]);
        reverse(str.begin(), str.end());
        return str + s;
    }
};