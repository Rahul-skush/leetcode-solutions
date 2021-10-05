class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s=1, e = INT_MIN;
        for(auto x : piles)
            e = max(e, x);
        while(s<e)
        {
            int m = (s+e)/2;
            int cnt = find(piles, m);
            if(cnt>h)
                s =m+1;
            else e =m;
        }
        
        return e;
    }
    
    int find(vector<int>&piles, int h)
    {
        int cnt =0;
        
        for(auto x : piles)
        {
            cnt += x/h + (x%h!=0);
        }
        return cnt;
    }
};
