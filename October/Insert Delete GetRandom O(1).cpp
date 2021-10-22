class RandomizedSet {
public:
    unordered_set<int> st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(st.count(val)) return 0;
        st.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(st.count(val)==0) return 0;
        st.erase(val);
        return 1;
    }
    
    int getRandom() {
        int n = rand()%st.size();
        auto it = st.begin();
        cout<<n<<" ";
        while(it!=st.end() && n-->0)
            it++;
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
