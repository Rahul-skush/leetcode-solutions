class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        double ans = find(x, abs(n));
        if(n>0) return ans;
        return 1/ans;
    }
    
    double find(double x, int n){
        if(n==1) return x;
        if(n==0) return 1;
        
        double f1 = find(x, n/2);
        if(n%2) return f1*f1*x;
        else return f1*f1;
    }
};