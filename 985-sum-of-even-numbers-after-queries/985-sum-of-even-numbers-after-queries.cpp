class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        unordered_map<int, int> mp;
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            mp[i] = nums[i];
            if(nums[i]%2==0) sum += nums[i];
        }
        
        vector<int> res;
        for(auto q : queries)
        {
            swap(q[0], q[1]);
           int val = mp[q[0]];
            if((val + q[1])%2==0)
            {
                if(q[1]%2==0)
                sum += q[1];
                else sum += val + q[1];
              
            }else{
                if(val%2==0)
                sum -= val;
            }
            
            res.push_back(sum);
              mp[q[0]] += q[1];
        }
        return res;
    }
};