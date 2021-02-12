class Solution {
public:
    int minAbsDifference(vector<int>& nums, int goal) {
        int n = nums.size();
        vector<int> half1, half2;
        int i=0;
        for(;i<n/2;i++)
            half1.push_back(nums[i]);
        for(; i<n;i++)
            half2.push_back(nums[i]);
        
        vector<int> a = gen_subset(half1);
        vector<int> b = gen_subset(half2);
        int ans = INT_MAX;
        for(int i =0;i<a.size();i++)
        {
            int x = lower_bound(b.begin(), b.end(), goal - a[i])-b.begin();
            if(x>0)
                ans = min(ans, abs(goal - b[x-1] - a[i]));
            if(x<b.size())
                ans = min(ans, abs(goal - b[x] - a[i]));
        }
        
        return ans;
    }
    
    vector<int> gen_subset(vector<int> v)
    {
        vector<int> res;
        int n = v.size();
        
        for(int i=0;i<(1<<n);i++)
        {
            int sum =0;
            for(int j =0;j<n;j++)
            {
                if(i & (1<<j))
                    sum += v[j];
            }
             res.push_back(sum);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
