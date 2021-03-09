class Solution {
public:
    string solveEquation(string eq) {
       int x = 0, p = 0, flag =1, i =0;
        while(i<eq.length())
        {
            int sign =1;
            if(eq[i]=='='){
                flag = -1; i++;
            } 
            if(eq[i]=='+'){
                sign = 1; i++;
            }
            if(eq[i]=='-'){
                sign = -1; i++;
            }
            
            if(isdigit(eq[i]))
            {
                int num =0;
                while(i<eq.length() && isdigit(eq[i]))
                    {num = num*10 + eq[i] - '0'; i++;}
                if(i<eq.length() && eq[i]=='x')
                    {x = x + flag*sign*num; i++;}
                else {p = p + flag*sign*num;}
            }else{
                x += flag*sign;
                 i++;
            }
        }
        
        if(p==0 && x==0) return "Infinite solutions";
        if(x==0) return "No solution";
        return  "x=" + to_string(p/x*-1);
              
        
        
    }
    
    
};
