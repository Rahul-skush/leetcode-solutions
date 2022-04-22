class MyHashMap {
public:
    vector<vector<pair<int, int>>> mp; 
    MyHashMap() {
        mp.resize(1003);
    }
    
    void put(int key, int value) {
        int ky = key%1003;
        for(auto &x : mp[ky])
        {
            if(x.first==key)
            {
                if(x.second!=value)  x.second = value; 
                return ;
            }
        }
        
        mp[ky].push_back({key, value});
    }
    
    int get(int key) {
        int ky = key%1003;
        for(auto &x : mp[ky])
            if(x.first==key) return x.second;
        
        return -1;
    }
    
    void remove(int key) {
        int ky = key%1003;
        auto x = mp[ky].begin();
        for(; x!=mp[ky].end(); x++)
            if(x->first==key) {mp[ky].erase(x); return ;}
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */