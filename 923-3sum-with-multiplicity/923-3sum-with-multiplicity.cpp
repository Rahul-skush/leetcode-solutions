class Solution {
public:
     int mod = 1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        for(auto x : arr)
            mp[x]++;
        
        int ans =0;
       
        for(int i=0;i<101;i++)
        {
            if(mp.count(i)==0) continue;
            for(int j=0;j<101;j++)
            {
                if(mp.count(j)==0) continue;
               int k = target - i - j;
                if(mp.count(k)==0) continue;
                if(i>j || j>k) continue;
                long long ann = 0;
                long long a = mp[i], b = mp[j], c = mp[k]; 
                if(i==j && j==k) ann += a*(a-1)*(a-2)/6;
                else if(i==j  && i!=k) ann += (a*(a-1)/2)*c;
                else if(i==k  && i!=j) ann += (a*(a-1)/2)*b;
                else if(k==j  && i!=k) ann += (b*(b-1)/2)*a;
                else ann += a*b*c;
                
                ans = (ans +ann)%mod;
            }
            
            ans %= mod;
        }
        return ans;
    }
    
};