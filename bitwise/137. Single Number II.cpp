class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++)
        {
            int sum =0;
            for(int n : nums)
            {
                if((n>>i)&1)
                    sum++;
                sum%=3;
            }
            if(sum)
                ans |= 1<<i;
        }
        return ans;
    }
};
