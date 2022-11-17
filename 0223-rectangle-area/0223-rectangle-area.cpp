class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long total = (long)(C-A) *(long) (D-B) + (long)(G-E) * (long)(H-F);
    
    if (C<=E || A>=G || B>=H || D<=F )
        return total;
    else
    {
        vector <int> h;
        h.push_back(A);
        h.push_back(C);
        h.push_back(E);
        h.push_back(G);
   
        vector <int> v;
        v.push_back(B);
        v.push_back(D);
        v.push_back(F);
        v.push_back(H);
    
        sort(h.begin(), h.end());
        sort(v.begin(), v.end());
    
        total = total - (h[2] - h [1]) * (v[2] - v[1]);
        return total;
    }
        return 0;
    }
    
};