class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) return 0;
        stack<int> st;
        int t = INT_MIN;
        for(int i = nums.size()-1;i>=0;i--)
        {
            if(t>nums[i]) return 1;
            while(!st.empty() && st.top()<nums[i]) t = st.top(), st.pop();
            
            st.push(nums[i]);
        }
       
        
        return 0;
    }
};