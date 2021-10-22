class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> v(52);
        for(int i=0;i<52;i++)
            v.push_back({0, 'a'});
        for(auto x : s)
        {
            if(x>='a'  && x<='z')
            {int i = x - 'a';
            v[i].first += 1;
            v[i].second = x;}else{
                int i = x - 'A' + 26;
                v[i].first += 1;
                v[i].second = x;
            }
        }
        
        sort(v.rbegin(), v.rend());
        string ans;
        for(auto x : v)
        {
            int n =x.first;
            while(n--)
                ans += x.second;
        }
        return ans;
    }
};
