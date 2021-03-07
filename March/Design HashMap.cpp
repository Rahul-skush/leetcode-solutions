class MyHashMap {
public:
    vector<list<pair<int,int>>> mp;
    int siz = 10002;
    /** Initialize your data structure here. */
    MyHashMap() {
        mp.resize(siz);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        auto &list = mp[key%siz];
        for(auto &p : list)
        {
            if(p.first==key)
                {p.second = value; return ;}
        }
        mp[key%siz].push_back({key, value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        auto &list = mp[key%siz];
        for(auto &p :  list)
        {
            if(p.first==key) return p.second;
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        auto &list = mp[key%siz];
        auto it = list.begin();
        for(;it!=list.end();it++)
        {
            if(it->first==key)
                {list.erase(it); return;}
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
