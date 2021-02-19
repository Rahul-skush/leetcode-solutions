class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        set<int> s;
        for(auto x : arr)
            s.insert(x);
        int ans = 0, n = arr.size();
        for(int i =0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a = arr[i] , b = arr[j];
               int cnt =0;
                while(s.find(a+b)!=s.end())
                {
                    int x = a+b;
                    a =b;
                    b = x;
                    cnt++;
                }
                if(cnt>0)
                    ans = max(ans, cnt+2);
            }
        }
        return ans;
    }
};
