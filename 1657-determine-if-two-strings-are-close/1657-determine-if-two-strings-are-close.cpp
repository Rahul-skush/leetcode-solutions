class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26, 0), v2(26, 0);
        
        for(auto x : word1)
            v1[x-'a']++;
        
        for(auto x : word2)
            v2[x-'a']++;
        
         for(int i=0;i<26;i++)
            if((v1[i]==0 && v2[i]) || (v1[i] && v2[i]==0)) return 0; 
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        for(int i=0;i<26;i++)
            if(v1[i]!=v2[i]) return 0;
        
        return 1;
    }
};