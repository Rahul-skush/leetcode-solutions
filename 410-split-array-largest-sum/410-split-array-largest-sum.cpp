class Solution {
public:
    int dp[1002][52];
    int splitArray(vector<int>& nums, int m) {
        return binSearch(nums, m);
    }
    
    int binSearch(vector<int> &nums, int m)
    {
        int l = 0,  h = 1e9+1;
        
        while(l<h)
        {
            int mid = l+(h-l)/2;
            if(mreduce(nums, m, mid)==0) l = mid+1;
            else h = mid;
        }
        return l;
    }
    
    int  mreduce(vector<int> &nums, int m, int mid)
    {
        int f =0;
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid) return 0;
            if(sum + nums[i]<=mid) {sum += nums[i];}
            else {f++; sum =nums[i];}
        }
        f++;
        return f<=m;
    }
};