class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int i =0, j =n;
        vector<int> v;
        while(i<n)
            {v.push_back(nums[i++]);
        v.push_back(nums[j++]);}
        return v;
    }
};
