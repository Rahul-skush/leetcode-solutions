class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.size()!=t.size()) return 0;
        set<int> st;
        map<int, int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[i]) continue;
            int d = 0;
            if(s[i]<t[i])
                d = (t[i] - 'a') - (s[i] - 'a');
            else d = ('z'-s[i]) + (t[i] -'a' +1);
            
            mp[d]++;
           
        }
        
        for(auto x: mp)
        {
            int n = x.second-1;
            if(n*26+x.first>k) return 0;
        }
        return 1;
    }
};