class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> frq(26, 0);
        for(auto x : words2)
        {
            vector<int> frq1(26, 0);
            for(auto c : x)
                frq1[c-'a']++;
            for(int i=0;i<26;i++)
            {
                if(frq1[i]>frq[i])
                    frq[i]= frq1[i];
            }
        }
        vector<string> ans;
        for(auto x : words1)
        {
            int cnt = find(x, frq);
            if(cnt) ans.push_back(x);
        }
        return ans;
    }
    
    int find(string s,  vector<int> frq)
    {
        for(int i=0;i<s.size();i++)
        {
            frq[s[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
            if(frq[i]>0) return 0;
        return 1;
    }
};