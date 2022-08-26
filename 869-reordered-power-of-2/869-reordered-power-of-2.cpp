class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_set<string> st;
        long long x = 1;
        st.insert("1");
        for(int i=1;i<32;i++)
        {
            x = x*2;
            long y = x;
            string str = to_string(y);
            sort(str.begin(), str.end());
            st.insert(str);
           
        }
        
         string str = to_string(n);
         sort(str.begin(), str.end());
        
        return st.find(str)!=st.end();
    }
};