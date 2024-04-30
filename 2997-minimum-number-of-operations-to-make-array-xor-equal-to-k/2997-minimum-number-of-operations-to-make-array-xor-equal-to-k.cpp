class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int xr =0;
        for(int i:nums)
            xr ^=i;
        
        int cnt =0;
        for(int i=0;i<32;i++)
        {
            int j1 = (1<<i)&k, j2 = (1<<i)&xr;
            if(j1!=j2)
                cnt++;
        }
        return cnt;
    }
};


    