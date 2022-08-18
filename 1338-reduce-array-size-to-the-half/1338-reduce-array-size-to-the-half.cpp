class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(auto x : arr)
            mp[x]++;
        vector<int> v;
        for(auto x : mp)
            v.push_back(x.second);
        sort(v.begin(), v.end());
        int n = arr.size(), target  =n/2;
        for(int i=0;i<v.size();i++)
        {
            if(n-v[i]<target) return v.size()-i;
            n -= v[i];
        }
        return 0;
    }
};