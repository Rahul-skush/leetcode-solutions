class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int cnt = 0, n = nums.size(), f =0;
        stack<int> s;
        vector<int> res(n, -1);
        for(int i=0;i<2*n;i++)
        {
        while(!s.empty() && nums[s.top()]<nums[i%n]) {
            res[s.top()] = nums[i%n]; s.pop();
            cnt++;
        }
            s.push(i%n);
        }
        return res;
    }
};
