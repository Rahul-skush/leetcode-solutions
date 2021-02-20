class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ch, cnt =0;
        if(val ==0 )ch = 1;
        else
            ch =0;
        
        for(auto x : nums)
            if(x == val) cnt++;
        
        int n  =nums.size(), k=n-1;
        for(int i =0;i<n-cnt;i++)
        {
            if(nums[i]==val)
                {swap(nums[i], nums[k--]); i--;}
        }
        return n-cnt;
    }
};
