class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        unordered_map<string, priority_queue<string>> mp;
        
        for(auto x : products)
        {
            string str = "";
            int mn = x.size();
            for(int i=0;i<min(1001, mn);i++)
            {
                str += x[i];
                mp[str].push(x);
                if(mp[str].size()>3) mp[str].pop();
            }
        }
        vector<vector<string>> res;
        string str = "";
        for(int i=0;i<searchWord.size();i++)
        {
            str += searchWord[i];
            vector<string> tmp;
            while(!mp[str].empty())
            {
                tmp.push_back(mp[str].top());
                mp[str].pop();
            }
            
            reverse(tmp.begin(), tmp.end());
            res.push_back(tmp);
        }
        
        return res;
    }
};