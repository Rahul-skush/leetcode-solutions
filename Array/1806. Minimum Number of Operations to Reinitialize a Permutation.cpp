class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> perm(n);
        for(int i=0;i<n;i++)
            perm[i] = i;
        
        int x = 1;
        while(x<10002)
        {
            vector<int> arr(n);
            for(int i=0;i<n;i++)
                arr[i] = i%2==0?perm[i/2]:perm[n/2 + (i-1)/2];
            int f = 0;
            for(int i=0;i<n;i++)
                {perm[i] = arr[i];
            if(arr[i]!=i) f =1;}
            if(!f) return x;
            x++;
        }
        return x;
    }
};
