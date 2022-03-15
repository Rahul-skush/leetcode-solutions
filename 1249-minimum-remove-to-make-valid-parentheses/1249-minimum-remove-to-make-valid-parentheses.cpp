class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z') continue;
            if(s[i]==')' && v.size() && s[v.back()]=='(') v.pop_back();
            else v.push_back(i);
        }
        
        string ans;
        int j =0;
        for(int i=0;i<s.size();i++)
        {
            if(j<v.size() && v[j]==i) {j++; continue;}
            
            ans += s[i];
        }
        
        return ans;
    }
};