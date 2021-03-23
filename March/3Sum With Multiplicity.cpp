class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        map<int, long> c;
        for(auto n : arr) c[n]++;
        long ans = 0;
        for(auto it1 : c)
        {
            for(auto it2 : c)
            {
                int i = it1.first, j = it2.first, k = target - i - j;
                if(c.count(k)==0) continue;
                if(i==j && j==k)
                    ans += c[i]*(c[i]-1)*(c[i]-2)/6;
                else 
                    if(i==j && j!=k)
                        ans += (c[i]*(c[i]-1)/2)*c[k];
                else if(i<j && j<k)
                    ans += c[i]*c[j]*c[k];
            }
        }
        return ans%int(1e9+7);
    }
};
