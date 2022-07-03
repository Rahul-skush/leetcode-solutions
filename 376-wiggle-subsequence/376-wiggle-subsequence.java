class Solution {
    public int wiggleMaxLength(int[] nums) {
        int prv=0, cnt =1;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]==nums[i-1]) continue;
            if(prv==0) {
                if(nums[i]>nums[i-1]) prv = 1;
                else prv =-1;
                cnt+=1;
            }else{
                if(prv!=signOf(nums[i]-nums[i-1]))
                    {prv = signOf(nums[i]-nums[i-1]); cnt++;}
            }
        }
        
        return cnt;
    }
    
    int signOf(int x)
    {
        return x>=0?1:-1;
    }
}