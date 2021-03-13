class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        if(n==0) return 1;
        if(fb.size()==1){
            if(fb[0]==0) {fb[0] =1; n--;}
            return n<=0;
        }
        if(fb[0]==0 && fb[1]==0) {fb[0] =1; n--;}
        for(int i=1;i<fb.size()-1;i++)
        {
           if(fb[i+1]==0 && fb[i]==0 && fb[i-1]==0) {fb[i] =1; n--;}
        }
        if(fb[fb.size()-1]==0 && fb[fb.size()-2]==0)n--;
        return n<=0;
    }
};
