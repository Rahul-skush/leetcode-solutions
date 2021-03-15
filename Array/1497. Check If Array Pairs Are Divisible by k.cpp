class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(auto x : arr)
        {
            mp[(x%k + k)%k]++;
        }
        for(auto x : mp)
        {
            int rem = (x.first%k + k)%k;
            if(rem==0)
            {
                if(mp[rem]&1) return 0;
            }else
                if(mp[rem]!=mp[k-rem]) return 0;
        }
        return 1;
    }
};
