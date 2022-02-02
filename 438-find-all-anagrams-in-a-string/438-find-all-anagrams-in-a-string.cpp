class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> mp1(26, 0), mp2(26, 0);
        vector<int> v;
        for(auto c : p)
            mp2[c-'a']++;
        int j =0;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]-'a']++;
            if(i>=p.size()-1)
            {
                if(checkAna(mp1, mp2)) v.push_back(j);
                mp1[s[j]-'a']--;
                j++;
            }
            
            
        }
        
        return v;
    }
    
    bool checkAna(vector<int> &mp1, vector<int>& mp2)
    {
        for(int i=0;i<26;i++)
            if(mp1[i]!=mp2[i]) return 0;
        return 1;
    }
};