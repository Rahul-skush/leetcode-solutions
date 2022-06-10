class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        
        int i=0, j =0, ans =0;
        while(j<s.size())
        {
            while(st.count(s[j]))
            {
                st.erase(s[i]);
                i++;
            }
            
            st.insert(s[j]);
            
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};