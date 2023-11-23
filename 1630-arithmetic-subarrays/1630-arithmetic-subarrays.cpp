class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v;
        for(int i=0;i<l.size();i++)
        {
            int li = l[i], ri = r[i], d = INT_MIN, f =0;
            vector<int> num;
            for(int k =li;k<=ri;k++)
                num.push_back(nums[k]);
            sort(num.begin(), num.end());
            for(int j =1;j<ri -li +1;j++)
            {
                if(d==INT_MIN)
                    d = num[j] - num[j-1];
                else
                    if(d!=num[j]-num[j-1])
                        {
                        cout<<i<<" ";
                        v.push_back(false); f =1; break;}
            }
            if(!f)
            v.push_back(true);
        }
        return v;
    }
};