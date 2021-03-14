class Solution {
public:
    int countPairs(vector<int>& del) {
        map<long long, long long> mp;
        for(auto x : del)
            mp[x]++;
        long long ans =0, mod =1e9 +7;
        for(auto &x : mp)
        {
            long long f = x.first;
            long long fn = x.second;
            for(int i=0;i<=21;i++)
            {
                long long p = pow(2, i);
                if(mp.find(p-f)!=mp.end() && mp[p-f]>0){
                    long long n = mp[p-f];
                    if(p-f == f){
                        n--;
                        ans += (n + n*(n-1)/2)%mod;
                    }else {
                        ans += (fn*n)%mod;
                    }
                }
            }
           mp[f] = 0;
        }
        return ans;
    }
};
