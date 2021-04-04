class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> mp;
        for(int i=0;i<nums1.size();i++)
            mp.push_back({abs(nums1[i] - nums2[i]), i});
        sort(mp.rbegin(), mp.rend());
        
        int j = mp[0][1], mod = 1e9+7;
        int mini = mp[0][0];
        for(int i=0;i<nums1.size();i++)
        {
            if(j!=i && abs(nums2[j] - nums1[i])<mini)
            {
                mini = abs(nums2[j] - nums1[i]);
            }
        }
        mp[0][0] = mini;
        long sum = 0;
        for(auto x : mp)
           {//cout<<x[0]<<"-"<<x[1]<<" ";
            sum = (sum + x[0])%mod;}
       // cout<<endl;
        return sum;
    }
};
