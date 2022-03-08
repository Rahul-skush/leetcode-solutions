class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int a =0, b = 0, c =0;
        for(int i:nums)
        {
            int x = a, y = b, z = c;
            
            int n1 = (a+i)%3, n2 = (b+i)%3, n3  =(c+i)%3;
            if(n1==0) x = max(x, a+i);
            else if(n1==1) y = max(y, a+i);
            else if(n1==2) z = max(z, a+i);
            
            if(n2==0) x = max(x, b+i);
            else if(n2==1) y = max(y, b+i);
            else if(n2==2) z = max(z, b+i);
            
            if(n3==0) x = max(x, c+i);
            else if(n3==1) y = max(y, c+i);
            else if(n3==2) z = max(z, c+i);
            
            a = x, b =y, c = z;
        }
        
        return a;
    }
};