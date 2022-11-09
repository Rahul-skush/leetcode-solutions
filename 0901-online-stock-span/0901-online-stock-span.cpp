class StockSpanner {
public:
    stack<pair<int, int>> st;
    int ptr = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        ptr+=1;
       while(!st.empty() && st.top().first<=price)
           st.pop();
        
        int res =ptr;
        if(!st.empty())
            res = ptr - st.top().second;
        
        st.push({price, ptr});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */