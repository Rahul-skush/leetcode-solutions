class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int frq[26] = {0};
        for(auto c : magazine)
            frq[c-'a']++;
        for(auto c : ransomNote)
        {
            if(frq[c-'a']==0) return 0;
            frq[c-'a']--;
        }
        return 1;
    }
};