class Solution {
public:
    int ans =-1, f =0;
    int findLUSlength(vector<string>& strs) {
        
        sort(strs.begin(), strs.end(), [&](string &s1, string &s2){
            return s1.size()>s2.size();
        });
        for(int i=0;i<strs.size();i++)
        {
            f =0;
            string x= strs[i];
            findSubset(x, 0, "", strs, i);
            //cout<<endl;
        }
        return ans;
    }
    
    void findSubset(string s, int i, string x, vector<string>& strs, int index)
    {
        if(i==s.size()){
            if(check(x, strs, index)){
                //cout<<x<<" ";
                int m = x.size(); f =1;
                if(ans<m)
                    ans = m;
            };
            return ;
        }
        if(f==0)
       { findSubset(s, i+1, x+s[i], strs, index);
        findSubset(s, i+1, x, strs, index);  } 
    }
    
    bool check(string s, vector<string>& strs, int index)
    {
        for(int k=0;k<strs.size();k++)
        {
            if(k==index) continue;
            string x = strs[k];
            int i=0, j =0;
            while(i<s.size() && j<x.size())
            {
                if(s[i]==x[j]) i++;
                j++;
            }
            if(i==s.size()) return 0;
        }
        return 1;
    }
};
