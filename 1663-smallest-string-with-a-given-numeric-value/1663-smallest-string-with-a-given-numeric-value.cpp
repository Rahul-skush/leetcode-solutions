class Solution {
public:
    string getSmallestString(int n, int k) {
        string str;
        for(int i=1;i<=n;i++)
            str+='a';
        k-=n;
        int i = n-1;
        while(k)
        {
            if(k>=25)
                {str[i] = 'z'; k-=25;}
            else {str[i] = 'a' + k; k =0;}
            i--;
        }
        
        return str;
    }
};