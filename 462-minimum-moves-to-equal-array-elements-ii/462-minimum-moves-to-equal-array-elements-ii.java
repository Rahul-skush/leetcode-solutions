class Solution {
    public int minMoves2(int[] nums) {
        long  ans =0;
        Arrays.sort(nums);
        int n = nums.length;
        long  med =0;
        if(n%2==1)
            med = nums[n/2];
        else med = (nums[n/2] + nums[(n+1)/2])/2;
        
        for(int x : nums)
            ans += Math.abs(med-x);
        
        return (int)ans;
    }
}