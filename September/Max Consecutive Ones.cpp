class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0){
                ans = max(ans, cnt);
                cnt = 0;
            }else cnt++;
        }
        
        return max(ans, cnt);
    }
};
