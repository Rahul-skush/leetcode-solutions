class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [&](string &s1, string &s2){
           if(s1.size()<s2.size()) return 0;
            if(s1.size()>s2.size()) return 1;
            else return s1>s2?1:0;
            
        });
        
        for(auto x:nums)
            cout<<x<<" ";
        cout<<endl;
        
       
        return nums[k-1];
    }
};