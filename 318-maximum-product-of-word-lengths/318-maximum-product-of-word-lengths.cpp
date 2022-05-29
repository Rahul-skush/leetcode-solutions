class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size(), ans =0;
        vector<vector<int>> v(n, vector<int>(26, 0));
        
        for(int i=0;i<n;i++)
        {
            for(auto x : words[i])
                v[i][x-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            int x =  words[i].size();
            
            for(int j=i+1;j<n;j++)
            { int f =0, y = words[j].size();
                for(int k=0;k<26;k++)
                {
                    if(v[i][k] && v[j][k])
                       {f= 1; break;}
                }
                if(!f) ans  = max(ans,x*y);
            }
            
            
        }
        
        return ans;
    }
};