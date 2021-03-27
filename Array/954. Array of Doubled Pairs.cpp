class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<int, int> mp;
        for(auto x : arr)
        {
            if(mp.find(2*x)!=mp.end() && mp[2*x]>0)
                mp[2*x]--;
            else
               if(x%2==0 && mp.find(x/2)!=mp.end() && mp[x/2]>0)
                mp[x/2]--; 
            else mp[x]++;
        }
        
        for(auto x : mp)
            // {cout<<x.first<<" "<<x.second<<endl;}
          if(x.second != 0) return 0;
        return 1;
        
    }
};
