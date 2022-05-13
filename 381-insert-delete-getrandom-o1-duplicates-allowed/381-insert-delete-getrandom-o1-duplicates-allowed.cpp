class RandomizedCollection {
public:
    unordered_map<int, unordered_set<int>>mp;
    vector<int> v;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        int flag =0;
        if(mp.count(val)==0) flag =1;
        v.push_back(val);
        mp[val].insert(v.size()-1);
        return flag;
    }
    
    bool remove(int val) {
        if(mp.count(val)==0) return 0;
        if(v.size()==1)
        {
            v.pop_back();
            mp.erase(val);
            return 1;
        }
        int last = v.back();
        int n = v.size()-1;
        int ind = *mp[val].begin();
        v[ind] = last;
        mp[val].erase(ind);
        mp[last].insert(ind);
        mp[last].erase(n);
        
        v.pop_back();
        if(mp[val].size()==0) mp.erase(val);
        return 1;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */