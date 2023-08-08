class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
            return nums[0]==target?0:-1;
        int h = nums.size()-1, s = 0, e = 0;
        int l = findPivot(0, nums.size()-1, nums);
       // return l;
       if(target>=nums[0] && l-1>=0 && target<=nums[l-1])
           s = 0, e = l-1;
        else s = l, e = h;
        
        return binSearch(s, e, target, nums);
       
    }
    int findPivot(int l, int h, vector<int>&nums)
    {
        while(l<h)
        {
            int m = (l+h)/2;
            if(nums[m]>nums[h]) l=m+1;
            else h = m;
        }
        return l;
    }
    int binSearch(int l, int h, int target, vector<int> nums)
    {
        while(l<h)
        {
            int m = (l+h)/2;
            if(nums[m]==target) return m;
            if(nums[m]>target)
                h = m;
            else l = m+1;
        }
        return nums[l]==target?l:-1;
    }
};