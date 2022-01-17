class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        int i =0;
        stringstream w(s);
        string x;
        while(w>>x)
        {
            if(i==pattern.size()) return 0;
            char c =pattern[i++];
            if(mp1.count(c) && mp2.count(x))
               { if(mp1[c]==x && mp2[x]==c) continue;
            else return 0;}
            else if(mp1.count(c) || mp2.count(x)) return 0;
            
            mp1[c] = x;
            mp2[x] =c;
            
        }
        
       // cout<<endl;
        return i>=pattern.size();
    }
};