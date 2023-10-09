class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1, -1};
        vector<int> ans;
        ans.push_back(find(nums, target, 1));
        ans.push_back(find(nums, target, 0));
        return ans;
    }
    
    int find(vector<int> &nums, int target, int occr)
    {
        int l = 0, h = nums.size()-1;
        while(l<h)
        {
            int m = (l+h)/2;
            if(nums[m]==target)
            {
                if(occr==1)
                    h= m;
                else l = m+1;
            }else if(nums[m]<target)
                l = m+1;
            else h = m;
        }
        if(nums[l]==target) return l;
        if(l-1>=0 && nums[l-1]==target) return l-1;
        return -1;
    }
};