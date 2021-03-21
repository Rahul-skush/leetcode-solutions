class Solution {
public:
    bool reorderedPowerOf2(int N) {
        
        vector<string> v;
       
        for(int i=0;i<31;i++)
        {
           int x = pow(2, i);
            v.push_back(to_string(x));
        }
        
        string s = to_string(N);
        vector<int> vis(10, 0);
        for(auto x : s)
            vis[x-'0']++;
        for(int i=0;i<31;i++)
        {
            int f =1;
            vector<int> b(10, 0);
            for(auto x : v[i])
            {
                b[x-'0']++;
            }
            
            for(int i=0;i<=9;i++)
                if(vis[i]!=b[i]) {f =0; break;}
            if(f) return 1;
        }
        
        
        return 0;
    }
};
