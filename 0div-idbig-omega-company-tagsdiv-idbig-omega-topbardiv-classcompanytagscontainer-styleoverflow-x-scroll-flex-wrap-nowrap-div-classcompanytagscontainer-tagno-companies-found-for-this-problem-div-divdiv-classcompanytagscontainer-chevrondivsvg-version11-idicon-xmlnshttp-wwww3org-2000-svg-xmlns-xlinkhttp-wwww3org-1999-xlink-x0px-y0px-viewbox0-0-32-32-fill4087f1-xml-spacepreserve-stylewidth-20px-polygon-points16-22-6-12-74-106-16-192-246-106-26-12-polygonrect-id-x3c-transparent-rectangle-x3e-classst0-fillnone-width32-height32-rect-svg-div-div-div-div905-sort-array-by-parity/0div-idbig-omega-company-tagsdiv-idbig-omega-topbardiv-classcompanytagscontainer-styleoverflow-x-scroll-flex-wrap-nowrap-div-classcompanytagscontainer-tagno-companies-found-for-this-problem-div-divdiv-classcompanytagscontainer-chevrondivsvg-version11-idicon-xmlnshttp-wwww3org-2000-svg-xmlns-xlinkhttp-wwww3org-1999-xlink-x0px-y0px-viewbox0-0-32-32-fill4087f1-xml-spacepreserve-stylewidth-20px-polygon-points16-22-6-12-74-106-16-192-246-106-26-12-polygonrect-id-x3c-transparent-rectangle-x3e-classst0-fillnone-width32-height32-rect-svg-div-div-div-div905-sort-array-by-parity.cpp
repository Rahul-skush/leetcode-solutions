class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i =0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]%2==0)
                {swap(nums[j], nums[i]); i++;}
        }
        return nums;
    }
};