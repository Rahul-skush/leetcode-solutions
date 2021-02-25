class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s =-1, e = -1, n = nums.size();
        int maxl = INT_MIN, minr = INT_MAX ;
       
        for(int i=0;i<n;i++)
        {
            maxl = max(maxl, nums[i]);
            minr = min(minr, nums[n-i-1]);
            
            if(nums[i]<maxl) e = i;
            if(nums[n-i-1]>minr) s = n - i -1;
        }
        
        if(s==-1) return 0;
        return e - s + 1;
            
    }
};
