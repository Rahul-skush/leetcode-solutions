class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<long long, long long> mp;
        for(auto x : segments)
            {mp[x[0]] += x[2]; mp[x[1]] -= x[2];}
        
        vector<vector<long long>> res;
        long long prv = -1, sum =0;
        for(auto x : mp)
        {
            
            if(prv!=-1) {
                if(sum>0)
                res.push_back({prv, x.first, sum});
            }
            prv = x.first;
            sum += x.second;
        }
        
        return res;
    }
};


    