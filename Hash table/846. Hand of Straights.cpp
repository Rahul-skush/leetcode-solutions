class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        int n = hand.size();
        if(n%W) return 0;
        map<int, int> mp;
        for(auto x : hand)
            mp[x]++;
        
        int m = 0;
        auto it =  mp.begin();
        auto itr = it;
        while(n)
        {
            int y = -1, f =0, s = 0;
             
            while(s<W)
            {
                if(it->second<=0) return 0;
                int x = it->first; it->second -=1;
                if(it->second>0 && f==0) {itr = it; f =1;}
                it++;
                if(y!=-1)
                {
                    if(x!=y+1) return 0;
                }
                 y = x;
                s++;
            }
            if(f)
            it = itr;
            n -=W;
        }
        return 1;
    }
};
