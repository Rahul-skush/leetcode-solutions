class Solution {
public:
    char findTheDifference(string s, string t) {
        char arr[26] = {0};
        for(auto c : s)
            arr[c-'a']++;
        
        for(auto c : t)
            arr[c-'a']--;
        
        for(int i=0;i<26;i++)
            if(arr[i]<0) return char('a'+i);
        
        return 'a';
    }
};