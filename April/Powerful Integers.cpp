class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        if(bound<=1) return {};
        if(x==y && x == 1)
           {return {2};}
        if(x>y) swap(x, y);
        int basex = x!=1?Log(x, bound):1;
        int basey = Log(y, bound);
        unordered_set<int> s;
        if(x==1)
        {
          for(int j=0;j<=basey;j++)
            {
                int z = 1 + pow(y, j);
                if(z<=bound)
                s.insert(z);
            }
        }
        else{
        for(int i=0;i<=basex;i++)
        {
            for(int j=0;j<=basey;j++)
            {
                int z = pow(x, i) + pow(y, j);
                if(z<=bound)
                s.insert(z);
            }
        }
        }
        return vector<int> (s.begin(), s.end());
    }
    
    int Log(int x, int bound)
    {
        int cnt=0;
        while(bound)
        {
            bound/=x;
            cnt++;
        }
        return cnt;
    }
};
