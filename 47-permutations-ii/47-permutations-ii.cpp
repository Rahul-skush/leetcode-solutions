class Solution {
public:
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         vector<vector<int>> res;
        find(0, res, nums);
        
        return res;
    }
    
    void find(int i,  vector<vector<int>> &res, vector<int> &nums)
    {
        
        if(i==nums.size()) { res.push_back(nums);  return ;}
        
        for(int j = i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[i]) continue;
            
            swap(nums[i], nums[j]);
            find(i+1, res, nums);
        }
        for (int j = nums.size() - 1; j > i; --j) {
                swap(nums[j], nums[i]);
            }
    }
};