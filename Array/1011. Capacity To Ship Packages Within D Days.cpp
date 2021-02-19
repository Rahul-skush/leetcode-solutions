class Solution {
public:
    int shipWithinDays(vector<int>& w, int D) {
      int l = 0, r = 0  ;
        for(auto x : w)
            {l = max(l, x);
        r += x;}
        while(l<r)
        {
            int m  = (l+r)/2, need =1, cur = 0;
            for(int i =0;i<w.size() && need<=D; cur += w[i++])
            {
                if(cur + w[i] > m)
                    cur = 0, need++;
            }
            if(need>D) l = m +1;
            else
                r = m;
        }
        return l;
    }
};
