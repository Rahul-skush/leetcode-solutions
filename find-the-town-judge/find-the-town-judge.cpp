class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0) return n==1?1:-1;
        
        unordered_map<int, int> mp;
        unordered_set<int> st;
        for(auto x : trust)
            {mp[x[1]]++;
        st.insert(x[0]);}
        
        for(auto x : mp)
            if(x.second==n-1 && st.count(x.first)==0) return x.first;
        
        return -1;
    }
};