class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int i=0, n = nums.size();
        while(i<n)
        {
            while(nums[i]!=i+1)
                {if(nums[i]==nums[nums[i]-1]) return nums[i];
                swap(nums[i], nums[nums[i]-1]);
                }
            i+=1;
        }
        
        return -1;
    }
};