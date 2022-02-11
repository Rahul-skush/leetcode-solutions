class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int frq[26] = {0}, frq1[26] = {0};
        
        for(auto c : s1)
            frq1[c-'a']++;
        int j =0;
        for(int i=0;i<s2.size();i++)
        {
            frq[s2[i]-'a']++;
            if(i>=s1.size()-1 && check(frq, frq1))
                return 1;
            if(i>=s1.size()-1)
                frq[s2[j++]-'a']--;
        }
        
        return 0;
    }
    
    bool check(int frq1[], int frq2[])
    {
        for(int i=0;i<26;i++)
            if(frq1[i]!=frq2[i]) return 0;
        
        return 1;
    }
};