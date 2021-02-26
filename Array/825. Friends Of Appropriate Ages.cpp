class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
      unordered_map<int, int> cnt;
        for(auto x : ages)
            cnt[x]++;
        int ans =0;
        for(auto &a : cnt)
        {
            for(auto &b : cnt)
            {
                if(request(a.first, b.first))
                {
                    int x  = a.first==b.first?1:0;
                    ans += a.second*(b.second - x);
                }
            }
        }
        
        return ans;
    }
    bool request(int a, int b)
    {
        return !(b<=(0.5*a + 7) || b>a || (b>100 && a<100));
    }
};








