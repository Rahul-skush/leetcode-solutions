class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans =0, n = nums.size();
        for(int i=31;i>=0;i--)
        {
            int cnt= 0, p = 1<<i;
            for(auto x : nums)
                if(x&p) cnt++;
            
            if(cnt>=(ceil((n*1.0)/2))) ans +=p;
        }
        return ans;
    }
};