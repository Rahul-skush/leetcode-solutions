class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int l = 0,  h =1e9;
        while(l<h)
        {
            int mid = l + (h-l)/2;
            int x = check(nums, m, mid);
            if(x!=-1 && x!=1) return x;
            if(x==-1)
                l=mid+1;
            else h = mid;
        }
        
        int sum =0, ans=0, f=0;
        for(int i=0; i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>l-1) { f++;  sum=nums[i];}
            else if(i<nums.size()-1 && sum==l-1){f++; sum =0;}
        }
        //cout<<l<<" "<<f<<endl;
        if(f==m-1 && sum<l) return l-1;
        sum =0, ans=0;
        for(int i=0; i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>l) {ans = max(ans, sum-nums[i]);  sum=nums[i];}
            else if(sum==l){ ans = max(ans, l); sum =0;}
        }
        return ans;
    }
    
    int check(vector<int>&nums, int m, int mid)
    {
        m-=1;
        int sum =0, mx=0;
        for(int i=0; i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>mid) {m--;  sum=nums[i];}
            else if(sum==mid){m--;  sum =0;}
        }
        if(sum>mid) m--;
       // cout<<mid<<" "<<m<<endl;
        if(m<0) return -1;
        else return 1;
            
    }
};