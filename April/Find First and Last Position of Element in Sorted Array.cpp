class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int first = -1, last = -1;
        first = binSearchf(nums, target);
        if(first==-1) return {-1,-1};
        last = binSearchl(nums, target);
        return {first, last};
    }
    
    int binSearchl(vector<int>& nums, int target)
    {
        int l = 0, h = nums.size()-1;
        while(l<h)
        {
            int m = (l+h)/2+1;
            if(nums[m]>target) h = m-1;
            else l = m;
        }
       
        return h;
    }
    int binSearchf(vector<int>& nums, int target)
    {
        int l = 0, h = nums.size()-1;
        while(l<h)
        {
            int m = (l+h)/2;
            if(nums[m]<target) l = m+1;
            else h = m;
        }
         if(nums[l]!=target) return -1;
        return l;
    }
};
