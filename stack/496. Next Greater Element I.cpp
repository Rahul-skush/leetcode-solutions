class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> mp;
        for(int n : nums2)
        {
            while(s.size() && s.top()<n){
                mp[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> res;
        for(auto n: nums1)
        {
            if(mp.count(n)>0) res.push_back(mp[n]);
            else res.push_back(-1);
        }
        return res;
    }
};
