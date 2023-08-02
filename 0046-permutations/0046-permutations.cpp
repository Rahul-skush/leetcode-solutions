class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> tmp;
        
        find(tmp, nums);
        return res;
    }
    
    void find(vector<int> &tmp, vector<int>& nums)
    {
        if(tmp.size()==nums.size()) {res.push_back(tmp); return ;}
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=-99)
            {
                tmp.push_back(nums[i]);
                nums[i] = -99;
                find(tmp, nums);
                nums[i] = tmp.back();
                tmp.pop_back();
            }
        }
    }
};