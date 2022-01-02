class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> mp;
        for(auto x : time)
        {
            mp[x%60]++;
        }
        
        int cnt =0;
        
        
        for(auto &x : mp)
        {
            if(x.first==0 || x.first==30)
                cnt += x.second*(x.second-1)/2;
            else {
                int d = 60-x.first;
                if(mp.count(d))
                    cnt += x.second*mp[d];
                x.second = 0;
            }
        }
        return cnt;
    }
};