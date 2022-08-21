class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int count  =0;
        vector<int> res;
        vector<bool> vis(target.size(), 0);
        while(count<target.size())
        {
            bool fl=0;
            for(int i=0;i<=target.size()-stamp.size();i++)
            {
                if(!vis[i] && canReplace(target, i, stamp))
                {
                    doReplace(target, i, stamp.size(), count);
                    vis[i] = true;
                    res.push_back(i);
                    fl =1;
                }
                if(count==target.size()) break;
            }
            if(fl==0) return {};
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
    bool canReplace(string t, int i, string s)
    {
        int k =0;
        for(int j=i;j<i+s.size();j++)
        {
            if(t[j]!='?' && t[j]!=s[k]) return 0;
            k++;
        }
        return 1;
    }
    
    void doReplace(string &t, int i, int len, int &cnt)
    {
        for(int j=i;j<i+len;j++)
        {
            if(t[j]!='?') cnt++;
           t[j]='?';
        }
    }
};