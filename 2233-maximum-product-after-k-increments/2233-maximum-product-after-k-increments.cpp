class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        if(nums.size()==1)
            return nums[0]+k;
        priority_queue<int ,vector<int>, greater<int>> pq;
        for(auto x : nums)
            pq.push(x);
        
        while(k)
        {
            int p = pq.top(); pq.pop();
            int diff = pq.top()-p;
            if(diff>=k)
            {
                pq.push(p + k); k=0;
            }else{
                pq.push(pq.top()+1);
                k -= diff +1;
            }
        }
        
        long ans =1;
        int mod = 1e9+7;
        while(!pq.empty())
        {
            ans = ans*pq.top();
            pq.pop();
            ans %= mod;
        }
        return ans;
    }
};