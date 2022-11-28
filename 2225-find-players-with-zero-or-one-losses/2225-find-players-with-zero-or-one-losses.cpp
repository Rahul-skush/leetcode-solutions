class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, vector<int>> mp;
        
        for(auto x :  matches)
        {
            if(mp.find(x[0])!=mp.end())
                mp[x[0]][0]+=1;
            else mp[x[0]] = {1, 0};
            
            if(mp.find(x[1])!=mp.end())
                mp[x[1]][1]+=1;
            else mp[x[1]] = {0, 1};
        }
        vector<int> v1, v2;
        for(auto x : mp)
        {
            int a = x.second[0], b = x.second[1];
            
            if(b==0)
                v1.push_back(x.first);
            else if(b==1) v2.push_back(x.first);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        return {v1, v2};
        
    }
};