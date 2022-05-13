class RandomizedSet {
public:
    unordered_map<int, int> mp;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val)) return 0;
        v.push_back(val);
        mp[val] = v.size()-1;
        return 1;
    }
    
    bool remove(int val) {
        if(mp.count(val)==0) return 0;
        int last = v.back();
        int i = mp[val];
        v[i] = last;
        mp[v[i]] = i;
        mp.erase(val);
        v.pop_back();
        return 1;
    }
    
    int getRandom() {
        int i = rand()%v.size();
        return v[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */