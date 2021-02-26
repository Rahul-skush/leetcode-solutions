class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        map<int, int> mp;
        vector<int> v(rains.size(), -1);
        set<int> zero;
        for(int i =0;i<rains.size();i++)
        {
            if(rains[i]==0)
            {
                zero.insert(i);
                v[i]=1;
            }
            else
            {
                if(mp.count(rains[i])>0)
                {
                    int ind = mp[rains[i]];
                    auto lstind = zero.upper_bound(ind);
                    
                    if(lstind == zero.end())
                        return {};
                    v[*lstind] = rains[i];
                    zero.erase(lstind);
                }
                mp[rains[i]] = i;
            }
        }
        return v;
    }
};


