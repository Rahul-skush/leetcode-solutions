class Solution {
public:
    int minOperations(vector<int>& nums) {
       int n = nums.size(), ans = n;
        unordered_set<int> st(nums.begin(), nums.end());
        nums.clear();
        for(auto x : st)
            nums.push_back(x);
        
         sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            int j = upper_bound(nums.begin(), nums.end(), nums[i] + n -1) - nums.begin();
           // cout<<j<<" ";
            int diff = j -i;
            ans = min(ans, n-diff);
        } 
        
        return ans;
    }
};