class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        //cout<<s.substr(0, n/2)<<" "<<s.substr(n/2, n);
        return cntVowel(s.substr(0, n/2)) == cntVowel(s.substr(n/2, n));
    }
    
    bool isVowel(char c)
    {
        switch(c)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A':case 'E': case 'I': case 'O': case 'U':
                return 1;
                default : return 0;
        }
        return 0;
    }
    
    int cntVowel(string s)
    {
        int cnt = 0;
        for(auto c : s)
            if(isVowel(c)) cnt++;
        return cnt;
    }
    
};
