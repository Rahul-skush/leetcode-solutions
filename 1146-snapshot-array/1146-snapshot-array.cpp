class SnapshotArray {
public:
    vector<map<int, int>> mp;
    int id =0;
    SnapshotArray(int length) {
        for(int i=0;i<length;i++)
            {
             map<int, int> v;
             v[id] = 0;
             mp.push_back(v);
        }
    }
    
    void set(int index, int val) {
            mp[index][id] = val;
    }
    
    int snap() {
       return id++;
    }
    
    int get(int index, int snap_id) {
       auto v = mp[index].upper_bound(snap_id);
         v--;
        return mp[index][v->first];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */