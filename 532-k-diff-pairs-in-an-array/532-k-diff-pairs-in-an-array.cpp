class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        int cnt =0;
        for(auto x : mp)
        {
            if(k==0) cnt+= x.second>=2;
            else
            if(mp.count(x.first+k)) cnt++;
        }
        
        return cnt;
    }
};