class Solution {
public:
    bool isAnagram(string s, string t) {
        int frq[26] ={0};
        for(auto x : s)
            frq[x-'a']++;
        
        for(auto x : t)
           frq[x-'a']--;
        
        for(auto x : frq)
            if(x!=0) return 0;
        return 1;
    }
};