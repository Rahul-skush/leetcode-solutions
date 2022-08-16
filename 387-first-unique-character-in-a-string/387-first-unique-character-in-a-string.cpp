class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++)
        {
            char x = s[i];
            if(mp.find(x)==mp.end())
                q.push(i);
            
            mp[x]++;
        }
        
        while(!q.empty())
        {
            if(mp[s[q.front()]]==1) return q.front();
            q.pop();
        }
        return -1;
    }
};