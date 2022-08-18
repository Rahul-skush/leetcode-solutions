class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s = -1, e = -1, maxl = INT_MIN, maxr = INT_MAX, n = nums.size();
        for(int i=0;i<n;i++)
        {
            maxl = max(maxl, nums[i]);
            maxr = min(maxr, nums[n-i-1]);
            if(nums[i]<maxl)  e = i;
            if(nums[n-i-1]>maxr) s = n-i-1;
        }
        if(s==-1) return 0;
        return e-s+1;
    }
};

