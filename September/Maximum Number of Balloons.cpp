class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        int cnt =0;
        for(auto x : text)
        {
            if(x=='b' || x=='a' || x=='l' || x=='o' || x=='n')
                mp[x]++;
            
            if(mp['b']>=1 && mp['a']>=1 &&  mp['l']>=2 &&  mp['o']>=2 &&  mp['n']>=1)
            {
                cnt++;
                mp['b']-=1; mp['a']-=1;  mp['l']-=2;  mp['o']-=2;  mp['n']-=1;
            }
        }
return cnt;
    }
};
