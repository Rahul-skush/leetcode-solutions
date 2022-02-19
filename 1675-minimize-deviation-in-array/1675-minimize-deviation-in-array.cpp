class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN, ans = INT_MAX;
        priority_queue<int> pq;
        for(auto x : nums)
        {
            x = x&1?x*2:x;
            pq.push(x);
            mn = min(mn, x);
        }
        
        while(pq.top()%2==0)
        {
            ans = min(ans, (pq.top() - mn));
           
            mn = min(mn, pq.top()/2);
            pq.push(pq.top()/2);
            pq.pop();
        }
        return min(ans, pq.top()-mn);
        
    }
};


    

// 1 1 5 5 3
//     1 1 3 5 5 = 4
//     2 1 3 5 5 = 4
//     2 2 3 5 5 = 3
    
//     1 1 5 = 4
//     2 1 5 = 4
//     2 2 5 = 3
    
//     1 1 1 3 = 2
//     2 1 1 3 = 2
//     2 2 1 3 = 2
//     2 2 2 3 = 1

// 6 6 8 10 14 18
    