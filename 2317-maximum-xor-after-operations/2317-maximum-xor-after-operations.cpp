class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<32;i++)
        {
            int cnt =0;
            for(int j: nums)
            {
                if(j&(1<<i)) {cnt++; break;}
            }
            
            if(cnt) ans += 1<<i;
        }
        return ans;
    }
};
