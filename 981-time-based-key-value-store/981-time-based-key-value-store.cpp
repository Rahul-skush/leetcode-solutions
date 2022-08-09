class TimeMap {
public:
    map<string, set<pair<int, string>>> mp;
    string str;
    TimeMap() {
        for(int i=0;i<101;i++)
            str += 'a';
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(mp[key].size()==0) return "";
        int tm = timestamp;
        auto it = mp[key].upper_bound({tm, str});
        if(it==mp[key].end()) it--;
        if(it->first>tm)  it--;
        if(it->first>tm) return "";
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */