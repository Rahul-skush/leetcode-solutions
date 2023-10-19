class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1, t1;
        for(auto x : s)
            if(x=='#'){
                if(s1.size()) s1.pop_back();
            }else s1 += x;
        
        for(auto x : t)
            if(x=='#'){
                if(t1.size()) t1.pop_back();
            }else t1 += x;
        
        return s1==t1;
    }
};