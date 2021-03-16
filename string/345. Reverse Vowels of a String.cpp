class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        while(i<j)
        {
            while(i<j && !isvowel(s[i]))i++;
            while(i<j && !isvowel(s[j]))j--;
            swap(s[i], s[j]);
            i++; j--;
        }
        return s;
    }
    
    bool isvowel(char c)
    {
        return c=='a'||c=='A'||c=='i'||c=='I'||c=='o'||c=='O'||
            c=='u'||c=='U'||c=='e'||c=='E';
    }
};
