class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> st;
        st.insert(1);
        while(n-->1)
        {
            long long x = *st.begin();
            st.erase(x);
            st.insert(2*x);
            st.insert(3*x);
            st.insert(5*x);
        }
        
        return *st.begin();
    }
};