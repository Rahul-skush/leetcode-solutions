class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<vector<int>> frq(26, vector<int>(2, -1));
        for(int i=0;i<s.size();i++)
        {
            int x = frq[s[i]-'a'][0], y = frq[s[i]-'a'][1];
            if(x==-1)
                x = i, y = i;
            else{
                y = i;
            }
            frq[s[i]-'a'][0] = x, frq[s[i]-'a'][1] = y;
        }
        
        
        vector<vector<int>> v;
        for(auto x : frq)
            {if(x[0]!=-1)
            v.push_back({x[0], x[1]});}
        
        sort(v.begin(), v.end());
        vector<int> ans;
        int start = v[0][0], end = v[0][1];
        for(int i=0;i<v.size();i++)
        {
            if(end>=v[i][0])
            {
                end = max(end, v[i][1]);
            }
            else{
                ans.push_back(end-start+1);
                start = v[i][0], end = v[i][1];
            }
        }
        ans.push_back(end-start+1);
        
        return ans;
    }
};