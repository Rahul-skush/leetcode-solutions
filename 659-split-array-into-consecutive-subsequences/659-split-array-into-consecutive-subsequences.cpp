class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> fm, hm;
        for(auto x : nums)
            fm[x]++;
        for(int i: nums)
        {
            if(!fm[i]) continue;
            if(hm[i])
            {
                hm[i]-=1;
                fm[i]-=1;
                hm[i+1]+=1;
            }else if(fm[i] && fm[i+1] && fm[i+2])
            {
                fm[i]-=1;
                fm[i+1]-=1;
                fm[i+2]-=1;
                hm[i+3]+=1;
            }else return false;
        }
        return true;
        
    }
};
