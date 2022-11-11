class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0, j=0;
        while(j<nums.size())
        {
            while(j<nums.size() && nums[i]==nums[j]) j++;
            i+=1;
            if(j<nums.size())
            nums[i] = nums[j];
        }
        return i;
    }
};