class Solution {
public:
    bool canIWin(int m, int t) {
        int sum = m*(m+1)/2;
        if(t<2) return 1;
        if(sum<t) return 0;
        if(sum==t) return m%2;
        return dfs(0, m, t);
    }
    bool dfs(int k, int m, int t)
    {
        if(mem[k]!=0) return mem[k]>0;
        if(t<=0) return 0;
        for(int i=0;i<m;i++)
        {
            if(!(k&(1<<i)) && !dfs(k|(1<<i), m, t - i-1))
                {mem[k]=1; return 1;}
        }
        mem[k] = -1;
        return 0;
        
    }
    int mem[1<<20] = {0};
};
