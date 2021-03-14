class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i =0, j =0;
        if(nums[0]<nums[1]) {i = 0; j=1;}
        else {i =1; j = 0;}
        
        for(int x = 2;x<nums.size();x++)
        {
          if(nums[x]>nums[j]){
             i =j;
             j = x;
          }else
              if(nums[x]>nums[i]){
                  i = x;
              }
        }
        return (nums[i]-1)*(nums[j]-1);
    }
};
