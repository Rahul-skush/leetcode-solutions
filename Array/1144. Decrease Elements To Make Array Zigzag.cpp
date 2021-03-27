class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, n = nums.size();
        if(n==1) return 0;
        for(int i=1;i<n-1;i+=2)
        {
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) continue;
            cnt1 += nums[i] - min(nums[i-1], nums[i+1]) +1;
        }
        if(n%2==0){
            if(nums[n-1]>=nums[n-2])
                cnt1 += nums[n-1] - nums[n-2] +1;
        }
        
        for(int i=2;i<n-1;i+=2)
        {
             if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) continue;
            cnt2 += nums[i] - min(nums[i-1], nums[i+1]) +1;
        }
        
        if(nums[0]>=nums[1])
            cnt2 += nums[0] - nums[1] + 1;
        if(n&1)
        {
             if(nums[n-1]>=nums[n-2])
                cnt2 += nums[n-1] - nums[n-2] +1;
        }
        
        return min(cnt1, cnt2);
    }
};
