class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8,9};
        vector<int> res;
        int k = 2, s =0;
        for(int i=0;i<9;i++)
        {
            int j = k, n = v.size();
            for(int l =s;l<n-1;l++)
            {
                int num = v[l]*10 + j++;
                v.push_back(num);
                if(num>=low && num<=high)
                    res.push_back(num);
               // cout<<num<<" ";
            }
            s = n;
            k++;
        }
        
        return res;
        
    }
};