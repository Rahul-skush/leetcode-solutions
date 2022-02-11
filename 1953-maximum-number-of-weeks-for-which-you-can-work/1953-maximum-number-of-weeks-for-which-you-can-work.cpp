class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        
        long long sum =0, mx = 0;
        for(auto x : milestones)
            {sum +=x; mx = max(mx, (long long)x);}
        
        long long rest = sum - mx;
        if(rest+1<mx)
            return rest*2+1;
        return sum;
    }
};

// 5 2 1
// 4 2 0 = 2
// 2 0 0 = 2*2
// 1 0 0 = 1

// 9 7 7 7 5 5
// 2 0 7 7 5 5 = 7*2
// 2 0 0 0 5 5 = 7*2
// 2 0 0 0 0 0 = 5*2
// 1 0 0 0 0 0 = 1
//             = 