class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        map<int, int> mp;
        int i=0, j = s.size();
        
        int cnt =0;
        while(i<j)
        {
            if(s[i]=='*') cnt++;
            else mp[i] = cnt;
            i++;
        }
        
        vector<int> v;
        for(auto q : queries)
        {
            
            auto it2 = mp.upper_bound(q[1]);
            auto it1 = mp.lower_bound(q[0]);
            if(it1==mp.end()) {v.push_back(0); continue;}
            if(it2==mp.end() || it2->first>q[1]) it2--;
            if(it1==mp.end() || it2 == mp.end()) {v.push_back(0); continue;}
            
            if(it2->first>it1->first)
            v.push_back(it2->second-it1->second);
            else v.push_back(0);
        }
        return v;
    }
};