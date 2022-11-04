class Solution {
public:
    string reverseVowels(string s) {
        int i =0, j = s.size()-1;
        while(i<j)
        {
            while(i<j && !isVowel(s[i])) i++;
            while(i<j && !isVowel(s[j])) j--;
            if(i<j)
                {swap(s[i], s[j]); i++, j--;}
        }
        return s;
    }
    
    bool isVowel(char c)
    {
        switch(c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return 1;
                break;
            default: return 0;
        }
        return 0;
    }
};