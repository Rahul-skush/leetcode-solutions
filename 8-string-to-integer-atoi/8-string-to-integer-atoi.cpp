class Solution {
public:
    int myAtoi(string s) {
        
                 int n = s.length();
        long mx = INT_MAX;
        int i = 0, sign = 1;
        long result = 0;
        
        while(i<n && s.at(i) == ' ')
            i++;
        if(i<n && s.at(i) == '+'){
            sign = 1;
            i++;
        }
        else if(i<n && s.at(i) == '-'){
            sign = -1; 
            i++;
        }
        while(i<n && (0<= s[i]-'0' && s[i] - '0' <= 9)){
            result = 10*result + (s[i++] - '0');
           if(result>mx && sign ==1){
               result = INT_MAX;
               break;
           }
            if(result*sign < INT_MIN && sign == -1){
                result = INT_MIN;
                break;
            }
            

        }
        return sign*result;
    }
};