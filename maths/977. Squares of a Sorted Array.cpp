class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0, r = nums.size()-1, k = r;
        while(l<=r)
        {
            if(abs(nums[l])>=abs(nums[r])) {res[k--] = nums[l]*nums[l]; l++;}
            else {res[k--] = nums[r]*nums[r]; r--;}
        }
        return res;
    }
};
