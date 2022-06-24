class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq (target.begin(), target.end());
        long long  sum = 0;
        for(auto x : target)
            sum+=x;
        
        
        int r= 0;
        while(pq.size()>1)
        {
            long long x = pq.top(); pq.pop();
            sum -= x;
            if(x==1) {sum++; continue;}
            if(sum>=x) return 0;
            if(sum==1) break;
            if(x>pq.top())
                x = x%sum;
            if(x-sum>=1)
            {
                x = x - sum;
            }
            if(x>=1)
               {sum += x; 
                if(x>1) pq.push(x);}
            else
                return 0;
        }
        return pq.top()==target.size() || pq.top()==1;
    }
};