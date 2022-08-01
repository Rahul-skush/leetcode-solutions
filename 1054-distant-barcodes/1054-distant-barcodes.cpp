class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int, int> mp;
        for(auto x : barcodes)
            mp[x]++;
        vector<vector<int>> v;
        for(auto x : mp)
            v.push_back({x.second, x.first});
        
        sort(v.rbegin(), v.rend());
        int j =0;
        for(int i=0;i<barcodes.size();i+=2)
        {
            barcodes[i] = v[j][1];
            v[j][0]-=1;
            if(v[j][0]==0) j++;
        }
        for(int i=1;i<barcodes.size();i+=2)
        {
            barcodes[i] = v[j][1];
            v[j][0]-=1;
            if(v[j][0]==0) j++;
        }
        return barcodes;
    }
};