class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0, j= s.size()-1;
        
        while(i<j)
        {
            while(i<s.size() && !isalpha(s[i]) && i<j) i++;
            while(j>=0 && !isalpha(s[j]) && i<j) j--;
            
            if(i<s.size() && j>=0 && i<j)
            swap(s[i], s[j]);
            i++; j--;
           // cout<<s<<" ";
        }
        return s;
    }
};
