class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n==1) return 1;
        priority_queue<int, vector<int>, greater<int>> pq;
        int m = primes.size();
       for(auto x: primes)
           pq.push(x);
                   for(int i =0;i<n-2;i++)
                   {
                       int cur = pq.top();
                       for(auto x:primes)
                       {
                           long mul = (long)x*(long)cur;
                           if(mul<INT_MAX)
                               pq.push(mul);
                       }
                       while(!pq.empty() && pq.top()==cur)
                           pq.pop();
                   }
        return pq.top();
    }
};
