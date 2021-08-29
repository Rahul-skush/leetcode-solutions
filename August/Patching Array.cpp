class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int i=0;
        long long j =1;
        int cnt =0;
        long long sum =0;
        while(sum<n)
        {
            while(i<nums.size() && nums[i]<=j)
            {
                sum += nums[i]; i++;
                j=sum+1;
            }
            if(sum<n)
                { sum += j;
                 //cout<<j<<" ";
                 j=sum+1; cnt++;}
        }
      //  cout<<endl;
        return cnt;
    }
};
