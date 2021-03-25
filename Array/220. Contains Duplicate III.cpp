class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      if (!k || t<0 || nums.size()<2)
        		return false;
        	set<long long>record;                   
        	auto nLen = nums.size();
        	for (int i = 0; i < nLen;++i)
        	{
        		if (i>k)
        			record.erase(nums[i - k - 1]);         
        		set<long long>::iterator lower =
                    record.lower_bound((long long)nums[i] - t);
        		if (lower != record.end() && abs((long long)nums[i] - *lower) 
                    <= t)
        			return true;
        
        		record.insert(nums[i]);
        	}
        	return false;
    }
};
