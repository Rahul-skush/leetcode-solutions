class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& act) {
        unordered_map<string, string> owner;
         map<string, string>parent;
        unordered_map<string, set<string>> unions;
        for(int i=0;i<act.size();i++)
        {
            for(int j=1;j<act[i].size();j++)
            {
                owner[act[i][j]] = act[i][0];
                parent[act[i][j]] = act[i][j];
            }
        }
        
        for(int i=0;i<act.size();i++)
        {
            string p = find(act[i][1], parent);
            for(int j=2;j<act[i].size();j++)
            {
                parent[find(act[i][j], parent)] =  p;
            }
        }
        
        for(int i=0;i<act.size();i++)
        {
            for(int j = 1;j<act[i].size();j++)
                unions[find(act[i][j], parent)].insert(act[i][j]);
        }
        
        vector<vector<string>> res;
        for(pair<string, set<string>> p :unions)
        {
            vector<string> emails(p.second.begin(), p.second.end());
            emails.insert(emails.begin(), owner[p.first]);
            res.push_back(emails);
        }
        return res;
    }
    
    string find(string s, map<string, string> parent)
    {
        return parent[s]==s? s: find(parent[s], parent);
    }
};
