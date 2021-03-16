class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int suma = 0, sumb = 0;
        set<int> mpa, mpb;
        for(auto x: A)
            {suma+=x; mpa.insert(x);}
        for(auto x: B)
            {sumb += x; mpb.insert(x);}
        if(suma<sumb)
        {
            int x = (sumb - suma)/2;
            for(auto y : mpa)
            {
               y+=x;
                if(mpb.find(y)!=mpb.end()) return {y-x, y};
            }
        }else{
            int x = (suma - sumb)/2;
            for(auto y : mpb)
            {
                y+=x;
                if(mpa.find(y)!=mpa.end()) return {y, y-x};
            }
        }
        return {};
    }
};
