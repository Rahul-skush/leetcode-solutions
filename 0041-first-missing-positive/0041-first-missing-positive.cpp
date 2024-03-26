class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            while(nums[i]!=i+1)
            {
                if(nums[i]>=n+1 || nums[i]<=0) break;
                if(nums[i]==nums[nums[i]-1]) break;
                swap(nums[i], nums[nums[i]-1]);
            }
           // cout<<nums[i]<<" ";
        }
      // cout<<endl;

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};