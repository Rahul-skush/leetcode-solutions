class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int j  =0, k=2;
        for(auto x: nums)
        {
            if(j<k || x>nums[j-k])
                nums[j++]=x;
        }
        return j;
    }
};
