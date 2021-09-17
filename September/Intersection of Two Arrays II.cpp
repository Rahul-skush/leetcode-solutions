class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int freq[1002] = {0};
        for(auto x : nums1)
            freq[x]++;
        vector<int> v;
        for(auto x : nums2)
        {
            if(freq[x]>0) v.push_back(x);
            freq[x]--;
        }
        return v;
        
    }
};
