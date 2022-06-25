class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int i =0, j = n-1;
        
        while(i+1<n)
        {
            if(nums[i+1]<nums[i])
                break;
            i++;
        }
        
        while(j-1>=0)
        {
            if(nums[j-1]>nums[j])
                break;
            j--;
        }
        
        if(j-i>1) return 0;
        if(i==0 || j==n-1 || i>=j) return 1;
        if(i-1>=0 && nums[i-1]<=nums[j]) return 1;
        if(j+1<n && nums[j+1]>=nums[i]) return 1;
        return 0;
    }
};