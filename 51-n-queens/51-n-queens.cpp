class Solution {
public:
    vector<vector<string>> res;
    int m;
    vector<vector<string>> solveNQueens(int n) {
        m = n;
        string s;
        for(int i=0;i<n;i++)
            s+='.';
        
        vector<string> v(n, s);
        
        find(0, v);
        return res;
    }
    
    void find(int i, vector<string> v)
    {
        if(i>=v.size()) {res.push_back(v); return ;}
        
        for(int j=0;j<m;j++)
        {
            v[i][j] = 'Q';
            if(check(i, j, v))
                find(i+1, v);
            v[i][j] = '.';
        }
    }
    
    bool check(int x, int y, vector<string> v)
    {
        for(int i=0;i<m;i++)
            if(i!=x && v[i][y]=='Q') return 0;
        for(int i=0;i<m;i++)
            if(i!=y && v[x][i]=='Q') return 0;
        
        int i = x, j = y;
        while(i>=0 && j>=0)
        {
            if(i!=x && j!=y && v[i][j]=='Q') return 0;
            i--; j--;
        }
        
        i = x, j = y;
        while(i<m && j<m)
        {
            if(i!=x && j!=y && v[i][j]=='Q') return 0;
            i++; j++;
        }
        
        i = x, j = y;
        while(i>=0 && j<m)
        {
            if(i!=x && j!=y && v[i][j]=='Q') return 0;
            i--; j++;
        }
        
        i = x, j = y;
        while(i<m && j>=0)
        {
            if(i!=x && j!=y && v[i][j]=='Q') return 0;
            i++; j--;
        }
        
        return 1;
    }
};