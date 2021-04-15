class Solution {
public:
    int fib(int n) {
        if(n==0) return  0;
        if(n==1) return 1;
        n-=2;
       int a = 0, b =1;
        while(n>-1)
        {
            b = a+b;
            a = b - a;
            n--;
        }
        return b;
    }
};
