class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int i =0, j =0, sum =0, ans =0;
        while(j<nums.size())
        {
            while(st.count(nums[j])) sum-=nums[i], st.erase(nums[i++]);
            
            st.insert(nums[j]);
            sum += nums[j];
            ans = max(ans, sum);
            j++;
        }
        
        return ans;
    }
};