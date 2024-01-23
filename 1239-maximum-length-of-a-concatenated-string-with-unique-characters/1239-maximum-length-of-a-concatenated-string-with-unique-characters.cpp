class Solution {
public:
    int ans =0;
    int maxLength(vector<string>& arr) {
        find("", 0,  arr);
        
        return ans;
    }
    
    void find(string s, int ind, vector<string>& arr)
    {
        
       ans= max(ans, (int)s.size());
        if(ind>=arr.size() ||  s.size()>=26) return;
        
        string t =s + arr[ind];
        int f =0;
        vector<int> v(26, 0);
        for(auto x : t)
        {
            if(v[x-'a']) {f =1; break;}
            else v[x-'a']++;
        }
        
        if(f==0)
        find(t,  ind+1, arr);
        
        find(s,  ind + 1, arr);
    }
};