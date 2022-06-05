
class Solution {
public:
    int m, cnt =0;
    int totalNQueens(int n) {
        m = n;
        string s;
        for(int i=0;i<n;i++)
            s+='.';
        
        vector<string> v(n, s);
        
        find(0, v);
        return cnt;
    }
    
    void find(int i, vector<string> &v)
    {
        if(i>=v.size()) {cnt++; return ;}
        
        for(int j=0;j<m;j++)
        {
            v[i][j] = 'Q';
            if(check(i, j, v))
                find(i+1, v);
            v[i][j] = '.';
        }
    }
    
    bool check(int x, int y, vector<string> &v)
    {
        for(int i=0;i<m;i++)
            if((i!=x && v[i][y]=='Q')|| (i!=y && v[x][i]=='Q')) return 0;
        
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