class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        unordered_map<int, set<int>> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].insert(i);
        vector<int> v;
        for(auto q : queries)
        {
            int  k =1, l =q[0], r =q[1], f =0, prv = -1;
            
                int j =1, ans = 100;
                while(j<=100)
                {
                    int x =j;
                    j++;
                    auto xsrch = mp[x].lower_bound(l);
                    if(xsrch==mp[x].end()) continue;
                    if(*xsrch>r) continue;
                    if(prv==-1) prv = x;
                    else{
                        ans = min(ans, abs(x-prv));
                        prv = x;
                        f =1;
                    }
                    //cout<<prv<<" ";
                }
           // cout<<endl;
            
            if(f==1) v.push_back(ans);
            else v.push_back(-1);
        }
        return v;
    }
};
