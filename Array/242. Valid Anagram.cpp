class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length(), m = t.length();
        if(n!=m) return false;
        
        int a[256] = {0};
        for(auto c : s)
        a[c - 'a']++;
        
        for(auto c : t)
        {
            a[c - 'a']--;
            if(a[c - 'a']<0) return false;
        }
        
        for(auto x : a)
        {
            if(x>0) return false;
        }
        return true;
    }
};
