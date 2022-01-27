class Solution {
public:
    
    
    
    int findMaximumXOR(vector<int>& nums) {
       int ans =0, mask = 0;
        
        for(int i=31;i>=0;i--)
        {
            mask = mask | 1<<i;
            unordered_set<int>st;
            for(auto x : nums)
            {
                    st.insert(x&mask);
            }
            int tmp = ans | 1<<i;
            for(auto x : st)
            {
                if(st.count(tmp^x))
                    ans =tmp;
            }
        }
        return ans;
    }
};