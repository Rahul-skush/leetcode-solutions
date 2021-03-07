class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i =0, k =1, j;
        for( j =0;j<nums.size();j++)
        {
            if(nums[j]==0) k--;
            if(k<0 && nums[i++]==0) k++;
        }
        return j -i -1;
       
    }
};
