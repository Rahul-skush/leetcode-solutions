class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res =nums.size(), i =0;
        for(auto x :nums)
            {
            res^=x;
            res^=i;
            i++;
           }
        return res;
        
    }
};
