class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return find(nums, k) - find(nums, k-1);
    }
    
    int find(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int j = 0, ans =0;
        for(int i=0;i<nums.size();i++)
        {
            if(!mp[nums[i]]++) k--;
            while(k<0)
            {
                if(!--mp[nums[j]]) k++;
                j++;
            }
            
             ans += i-j+1;
        }
        
        return ans;
    }
};