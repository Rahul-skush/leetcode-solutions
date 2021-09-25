class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sumo = 0, sume =0;
        for(auto x : nums)
        {
            if(x%2) sumo += x;
            else sume += x;
        }
        
        vector<int> v;
        
        for(auto q: queries)
        {
            int y = q[0] + nums[q[1]];
            if(y%2)
            {
                if(nums[q[1]]%2)
                {
                    sumo += q[0];
                }else{
                    sume -= nums[q[1]];
                    sumo += y;
                }
            }else{
                if(nums[q[1]]%2)
                {
                    sumo -= nums[q[1]];
                    sume += y;
                }else{
                    sume += q[0];
                }
            }
            
            v.push_back(sume);
            nums[q[1]] = y;
        }
        
        return v;
    }
};
