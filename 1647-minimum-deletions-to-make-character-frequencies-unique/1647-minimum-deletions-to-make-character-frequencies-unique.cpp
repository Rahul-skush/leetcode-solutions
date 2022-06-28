class Solution {
public:
    int minDeletions(string s) {
      vector<int> frq(26, 0);
        for(auto c : s)
            frq[c-'a']++;
        
        sort(frq.rbegin(), frq.rend());
        
        int prv = INT_MAX, ans =0;
        for(auto x : frq)
        {
            if(x==0) break;
            if(prv==0) {ans += x; continue;}
            if(x>=prv)
                {ans+=x-prv+1; 
                 x =  prv -1;}
            prv = x;
        }
        
        return ans;
    }
};