class ProductOfNumbers {
public:
    vector<int> prf;
    set<int> s;
    int i = 1;
    ProductOfNumbers() {
     prf.push_back(1);   
    }
    
    void add(int num) {
        if(num==0) {s.insert(i); prf.push_back(1); }
        else
        prf.push_back(num*prf.back());
        i++;
    }
    
    int getProduct(int k) {
        int n = prf.size() - k-1;
        auto x = s.upper_bound(n);
        if(x != s.end()) return 0;
        return prf.back()/prf[n];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
