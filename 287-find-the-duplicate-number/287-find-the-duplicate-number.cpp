class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int v[32] = {0};
        for(int i=0;i<nums.size();i++)
          for(int j=0;j<32;j++)
              if(nums[i]&(1<<j)) v[j] +=1;
        
        for(int i=1;i<nums.size();i++)
           for(int j=0;j<32;j++)
                if(i&(1<<j)) v[j] -=1;
             
            
        int sum =0;
        for(int j=0;j<32;j++)
            if(v[j]>0)
                sum += 1<<j;
        
        return sum;
    }
};