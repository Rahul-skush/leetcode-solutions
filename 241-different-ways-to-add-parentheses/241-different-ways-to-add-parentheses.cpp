class Solution {
public:
    vector<int> v;
    map<vector<int>, vector<int>> mp;
    vector<int> diffWaysToCompute(string expression) {
       
       return find(0, expression.size()-1, expression);
    }
    
    vector<int> find(int s, int e, string str)
    {
        if(s>e) return {0};
        if(mp.count({s, e})) return mp[{s, e}];
        vector<int> vt;
        for(int i=s;i<e;i++)
        {
            if(str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-')
            {
            vector<int> x = find(s, i-1, str);
            vector<int> y = find(i+1, e, str);
            for(auto k : x)
           {
                for(auto j : y)
                {
                     int z = compute(k, j, str[i]);
                     vt.push_back(z);
                }
            }
        }
        }
        
        if(vt.size()==0)
        {
            return {stoi(str.substr(s, e-s+1))};
        }
        return mp[{s, e}] = vt;
    }
    
    int compute(int x, int y , char s)
    {
    
        if(s=='*') return x*y;
        if(s=='/') return x/y;
        if(s=='+') return x+y;
        if(s=='-') return x-y; 
       return 0;
    }
    
    string toString(char c)
    {
        if(c=='*') return "*";
        if(c=='+') return "+";
        if(c=='-') return "-";
        if(c=='/') return "/";
        return "";
    }
};