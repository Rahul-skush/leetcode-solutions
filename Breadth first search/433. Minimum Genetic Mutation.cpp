class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> st (bank.begin(), bank.end());
        unordered_set<string> vis;
        vector<char> dirs = {'A', 'C', 'T', 'G'};
        queue<string> q;
        q.push(start);
        int level = 0;
        while(!q.empty())
        {
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                string s = q.front(); q.pop();
                cout<<s<<" ";
                vis.insert(s);
                if(s==end) return level;
                for(int j=0;j<8;j++)
                {
                    char c = s[j];
                    for(auto x : dirs)
                    {
                        s[j] = x;
                        if(x==c) continue;
                        if(vis.count(s) || st.count(s)==0) continue;
                        q.push(s);
                    }
                    s[j] = c;
                }
            }
            
            ++level;
        }
        
        return -1;
    } 
};
