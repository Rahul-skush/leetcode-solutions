class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin(), nums.end(), [&](string &a, string &b){
            if (a.size() != b.size()) return a.size() > b.size();
            return  a > b;
        });
        
            return nums[k-1];
    }
};
