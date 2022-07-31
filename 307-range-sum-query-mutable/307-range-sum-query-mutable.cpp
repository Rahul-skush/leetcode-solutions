class NumArray {
public:
    int bits[100002];
      int sumRange(int left, int right) {
        cout<<getsum(right+1)<<" "<<getsum(left)<<endl;
        return getsum(right+1) - getsum(left);
    }
    
    int getsum(int i)
    {
        int sum =0;
        while(i>0)
        {
            sum += bits[i];
            i-= i&-i;
        }
        return sum;
    }
    NumArray(vector<int>& nums) {
        memset(bits, 0, sizeof(bits));
        for(int i=0;i<nums.size();i++)
            update(i, nums[i]);
    }
    
    void update(int index, int val) {
        index +=1;
        val -= getsum(index) - getsum(index-1);
         while(index<100002)
         {
             bits[index] += val;
             index +=  index&-index;
         }
    }
    
  
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */