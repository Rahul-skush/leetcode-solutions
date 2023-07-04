class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans =0;
        for(int i=31;i>=0;i--)
        {
            int cnt =0;
            for(auto x : nums)
            {
                if(x&(1<<i))
                    cnt++;
            }
            if(cnt%3)
                ans += 1<<i;
        }
        
        return ans;
    }
};