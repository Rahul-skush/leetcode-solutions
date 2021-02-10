class Solution {
public:
    vector<int> res;
    vector<int> numsSameConsecDiff(int n, int k) {
     vector<int> nums;
        for(int i =1;i<=9;i++)
            {
              nums.push_back(i);
              traverse(n, k, nums);
            nums.pop_back();
            }
        return res;
    }
    
    void traverse(int n, int k, vector<int> nums)
    {
        if(nums.size()>=n) 
            
        {
            int ans = 0;
            for(int i =0;i<n;i++)
            {
                ans = ans*10 + nums[i];
            }
            if(res.empty()==true ||  res.back()!=ans)
            res.push_back(ans);
            return ;
        }
        
        int m = nums.back();
        if((m+k)<=9)
           { nums.push_back(m+k);
            traverse(n, k, nums);
            nums.pop_back();
           }
        m = nums.back();
        if(m-k>=0)
        {
           nums.push_back(m-k);
           traverse(n, k, nums);
            nums.pop_back();
        } 
        
    }
};
