class Solution {
public:
    vector<int> res;
    vector<int> numsSameConsecDiff(int n, int k) {
       
        for(int i=1;i<=9;i++)
        k==0?find1(n, i):find(n, k, 1, "", i);
        
        return res;
    }
    
    void find(int n, int k, int i, string s, int j)
    {
        s += '0'+j;
        if(i>=n) {
            res.push_back(stoi(s));
            return ;
        }
        
        if(k+j<=9)
            find(n, k, i+1, s, k+j);
        if(j-k>=0)
            find(n, k, i+1, s, j-k);
    }
    
    void find1(int n, int i)
    {
        string s;
        for(int j=0;j<n;j++)
            s += '0' + i;
        res.push_back(stoi(s));
        return ;
    }
};