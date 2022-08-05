class CustomStack {
public:
    vector<int> st;
    int mx;
    CustomStack(int maxSize) {
        mx = maxSize;
    }
    
    void push(int x) {
        if(st.size()==mx) return ;
        st.push_back(x);
    }
    
    int pop() {
        if(st.size()==0) return -1;
       int tp = st.back(); st.pop_back();
        return tp;
    }
    
    void increment(int k, int val) {
        if(k>=st.size() || k>= mx)
            k = st.size();
         for(int i=0;i<k;i++)
             st[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */