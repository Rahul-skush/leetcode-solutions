class RLEIterator {
public:
    int ind=0;
    vector<int> nums;
    RLEIterator(vector<int>& encoding) {
        nums = encoding;
    }
    
    int next(int n) {
        
        while(ind<nums.size() && nums[ind]<n)
        {
            n -= nums[ind];
            ind +=2;
        }
        if(ind==nums.size()) return -1;
        if(nums[ind]>=n)
             nums[ind] -= n;
        
        int x = nums[ind+1];
          return x;
        
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */