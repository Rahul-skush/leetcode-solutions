class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int, int> mp;
        for(auto x : candyType)
            mp[x]++;
        
        int n = candyType.size(), m= mp.size();
        return min(n/2, m);
        
        }
};
