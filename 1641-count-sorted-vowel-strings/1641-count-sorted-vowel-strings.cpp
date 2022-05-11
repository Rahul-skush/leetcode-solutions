class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1) return 5;
        if(n==2) return 15;
           vector<int> v = {5, 4, 3, 2, 1};
           
           for(int i=3;i<=n+1;i++)
           {
               v[0] = v[0] + v[1] + v[2] + v[3] + v[4];
               v[1] = v[1] + v[2] + v[3] + v[4];
               v[2] = v[2] + v[3] + v[4];
               v[3] = v[3] + v[4];
               v[4] = v[4];
           }
           
           return v[0];
    }
};