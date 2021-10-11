class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=0) return 0;
        int prod =1, curr =0, n = nums.size();
        int i=0, j =0;
        
        for(;i<n && j<n ; i++)
        {
            prod *= nums[i];
            while(j<=i && prod>=k)
                prod /=  nums[j++];
            
            curr += i-j +1;
        }
        return curr;
    }
};
