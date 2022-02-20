class SnapshotArray {
public:
    map<int, map<int, int>> mp;
    int k =0;
    SnapshotArray(int length) {
        for(int i=0;i<length;i++)
            mp[i][0] = 0;
    }
    
    void set(int index, int val) {
        mp[index][k] = val;
    }
    
    int snap() {
        return k++;
    }
    
    int get(int index, int snap_id) {
        auto it = mp[index].upper_bound(snap_id);
        it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */