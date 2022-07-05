class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int ans =1;
        for(auto x : nums)
        {
            if(st.find(x-1)==st.end()){
                int y = x;
                while(st.find(y)!=st.end()) y+=1;
                ans = max(ans, y-x);
            }
        }
       
        return ans;
    }
};