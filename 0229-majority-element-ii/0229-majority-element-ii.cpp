class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1, e2, cnt1 =0, cnt2 =0;
        for(auto x :  nums)
        {
            if(x==e1) cnt1++;
            else if(x==e2) cnt2++;
            else if(cnt1==0) e1 = x, cnt1++;
            else if(cnt2==0) e2 = x, cnt2++;
            else cnt1--, cnt2--;
        }
        
        cnt1 =0, cnt2 =0;
        for(auto x : nums)
            {cnt1 += x==e1;
            cnt2 += x==e2;}
        vector<int> v;
        int  n = floor(nums.size()/3);
        if(cnt1>n) v.push_back(e1);
        if(cnt2>n) v.push_back(e2);
        
        return v;
    }
};