class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt =0;
        for(auto x : nums)
        {
            if(mp.count(k-x)!=0)
                {mp[k-x]--;
                 if(mp[k-x]==0) mp.erase(k-x);
                 cnt++;
                }
            else mp[x]++;
        }
        
        return cnt;
    }
};

