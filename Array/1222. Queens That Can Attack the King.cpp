class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        set<vector<int>> mp;
        for(auto x : queens)
            mp.insert(x);
        vector<vector<int>> v;
        int i = king[0], j = king[1];
        for(i = i-1;i>=0;i--)
            if(mp.count({i, j})) {v.push_back({i, j}); break;}
        i = king[0], j = king[1];
        for(i = i+1;i<=100;i++)
            if(mp.count({i, j})) {v.push_back({i, j}); break;}
        i = king[0], j = king[1];
        for(j = j-1;j>=0;j--)
            if(mp.count({i, j})) {v.push_back({i, j}); break;}
        i = king[0], j = king[1];
        for(j = j+1;j<=100;j++)
            if(mp.count({i, j})) {v.push_back({i, j}); break;}
        i = king[0], j = king[1];
        for(int k=1;k<=100;k++)
            if(mp.count({i-k, j-k})) {v.push_back({i-k, j-k}); break;}
        i = king[0], j = king[1];
        for(int k=1;k<=100;k++)
            if(mp.count({i+k, j+k})) {v.push_back({i+k, j+k}); break;}
        i = king[0], j = king[1];
        for(int k=1;k<=100;k++)
            if(mp.count({i+k, j-k})) {v.push_back({i+k, j-k}); break;}
        i = king[0], j = king[1];
        for(int k=1;k<=100;k++)
            if(mp.count({i-k, j+k})) {v.push_back({i-k, j+k}); break;}
        
        return v;
    }
};
