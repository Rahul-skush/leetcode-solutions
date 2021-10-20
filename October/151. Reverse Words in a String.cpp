class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string str, ans;
        int i =n-1;
        while(i>=0 && s[i]==' ')i--;
        int j =0;
        while(j<i && s[j]==' ')j++;
        for(;i>=j;i--)
        {
            if(s[i]==' ')
            {
                reverse(str.begin(), str.end());
                ans += str ;
                if(str.size())
                    ans += ' ';
                    
                str = "";
            }else str += s[i];
        }
        reverse(str.begin(), str.end());
        ans += str;
        return ans;
    }
};
