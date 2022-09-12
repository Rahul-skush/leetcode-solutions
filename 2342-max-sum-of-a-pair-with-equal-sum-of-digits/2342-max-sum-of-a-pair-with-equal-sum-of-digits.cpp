class Solution {
public:
    int maximumSum(vector<int>& nums) {
       unordered_map<int , vector<int>> mp;
        int ans =-1;
        for(auto x : nums)
        {
            int i = find(x);
            vector<int> v = mp[i];
            if(v.size()==0) v.push_back(x);
            else if(v.size()==1)
            {
                v.push_back(x);
                 if(v[1]>v[0]) swap(v[0], v[1]);
            }else{
                if(v[1]<x) v[1] = x;
                if(v[1]>v[0]) swap(v[0], v[1]);
            }
            mp[i] = v;
            if(v.size()==2)
            ans = max(ans, v[0] + v[1]);
        }
        return ans;
    }
    
    int find(int n)
    {
        int sum =0;
        while(n)
        {
            sum += n%10;
            n/=10;
        }
        return sum; 
    }
};