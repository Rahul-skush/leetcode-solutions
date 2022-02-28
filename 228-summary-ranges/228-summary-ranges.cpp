class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int i=0, n= nums.size(), prv ;
        if(n==0) return {};
        
        while(i<n)
        {
            prv = nums[i];
            while(i+1<n && nums[i]==nums[i+1]-1)
                   i++;
            string s;
            s = to_string(prv);
            int last = nums[i];
            if(last!=prv)
            {s +="->";
            s += to_string(last);}
            v.push_back(s);
            
            i++;
        }
        return v;
    }
};
