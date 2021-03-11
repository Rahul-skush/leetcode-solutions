class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        long long sum = 0, curSum = 0, i =0, ans = INT_MIN, n = A.size();
        if(n==0) return 0;
        for(auto x:A) {sum+=x; curSum += x*(i++);}
        for(int x : A)
        {
            curSum = curSum - sum + x*n;
                ans = max(ans, curSum);
        }
        return ans;
    }
};
