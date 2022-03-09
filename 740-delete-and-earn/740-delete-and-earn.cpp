class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int take =0, skip =0;
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        
        for(int i=1;i<10002;i++)
        {
            int taki = skip + mp[i]*i;
            int skipi = max(skip, take);
            
            take = taki;
            skip = skipi;
        }
        
        return  max(skip, take);
    }
};