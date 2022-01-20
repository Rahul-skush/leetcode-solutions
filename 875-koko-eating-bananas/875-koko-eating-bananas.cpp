class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1, j = 1e9;
        while(i<j)
        {
            int k = (i+j)/2, f =0, sum =0;
            for(int x:piles)
            {
                sum += x/k + (x%k!=0);
                if(sum>h) {f =1; break;}
            }
            if(f)
                i= k+1;
            else j = k;
        }
        
        return i;
    }
};