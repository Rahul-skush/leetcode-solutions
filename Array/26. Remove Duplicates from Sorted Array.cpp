class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0, j =0;
        while(j<nums.size())
        {
            int x = nums[j];
            nums[i] = x;
            while(j<nums.size() && x==nums[j])j++;
            i+=1;
        }
        return i;
    }
};
