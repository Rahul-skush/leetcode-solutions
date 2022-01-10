class Solution {
public:
    map<int, int> mp;
    int j =0;
    Solution(vector<int>& w) {
        int i=0;
        while(i<w.size())
        {
            j+=w[i];
            mp[j] = i;
            i++;
        }
    }
    
    int pickIndex() {
        int x = rand()%j;
        auto it = mp.upper_bound(x);
        return it->second;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */