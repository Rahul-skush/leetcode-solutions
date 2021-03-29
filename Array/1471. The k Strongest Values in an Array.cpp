class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int m = (arr.size() - 1)/2;
        m = arr[m];
        vector<pair<int, int>> v;
        for(auto x : arr)
        {
            v.push_back({abs(m - x), x});
        }
        
        sort(v.begin(), v.end(), [&](pair<int, int> &p1, pair<int, int> &p2){
            return p1.first>p2.first || (p1.first == p2.first && p1.second>p2.second);
        });
            vector<int> ans;
        for(int i=0; i<k;i++)
            ans.push_back(v[i].second);
        return ans;
    }
};
