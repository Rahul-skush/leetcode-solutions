class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        // starting with positive sign
        int sgn = 1, cnt1 =1;
        for(int i=1;i<nums.size();i++)
        {
            if(sgn*(nums[i]-nums[i-1])>0)  // checking alternate sign, pos*pos>0 && neg*neg>0
                {sgn = -1*sgn; cnt1++;}
        }
        //starting with negative sign
        int cnt2 = 1;
        sgn = -1;
        for(int i=1;i<nums.size();i++)
        {
            if(sgn*(nums[i]-nums[i-1])>0)  // checking alternate sign, pos*pos>0 && neg*neg>0
                {sgn = -1*sgn; cnt2++;}
        }
        
        return max(cnt1, cnt2);
    }
};
