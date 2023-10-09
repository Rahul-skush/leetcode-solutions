class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0, e = nums[0];
        for(auto x :  nums)
        {
            if(x==e) cnt++;
            else if(cnt==0) cnt+=1, e = x;
            else cnt--;
        }
        
        return e;
    }
};