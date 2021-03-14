class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> v;
        map<int, vector<int>> mp;
        for(int i =0;i<nums.size();i++)
        {
            for(int j =0;j<nums[i].size();j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto x : mp)
        {
            for(int i = x.second.size() -1;i>=0;i--)
                v.push_back(x.second[i]);
        }
        return v;
    }
};
