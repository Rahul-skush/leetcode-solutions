class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1;
        while(i<j)
        {
            while(i<j && !isalpha(s[i]) && !isNum(s[i]))i++;
            while(i<j && !isalpha(s[j]) && !isNum(s[j]))j--;
            char a = toLower(s[i]);
            char b = toLower(s[j]);
            if(a!=b) return 0;
            i++; j--;
        }
        return 1;
    }
    
    char toLower(char c)
    {
        char ans = c;
        if(c>='A' && c<='Z') {int x = c-'A'; ans = x + 'a';}
        return ans;
    }
    bool isNum(char c)
    {
        return c>='0' && c<='9';
    }
};
