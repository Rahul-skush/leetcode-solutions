class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum =1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum  = sum - nums[i];
            if(sum<=0) sum =1;
        }
        
        return sum;
    }
};