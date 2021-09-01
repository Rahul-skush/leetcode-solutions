class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==-1) continue;
            int j=i, cnt =0;
            while(nums[j]!=-1)
            {
                int x = nums[j];
                nums[j] = -1;
                j =x;
                cnt++;
            }
            //cout<<i<<" "<<cnt<<endl;
            ans = max(ans, cnt);
        }
        return ans;
    }
};
