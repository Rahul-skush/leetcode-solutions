class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());
        int l = 1, h = p.back() - p[0];
        while(l<h)
        {
            int M = (l+h+1)/2;
            if(checkValid(M, m, p)) l = M;
            else h = M-1;
        }
        return l;
    }
    
bool checkValid(int M, int m, vector<int> &A)
{
    int total= 1, prv = 0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] - A[prv]>=M)
            {prv = i; total++;
            if(total>=m) return 1;}
    }
    
    return total>=m;
}
    
};
