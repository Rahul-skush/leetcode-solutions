class Solution {
public:
    int calculate(string s) {
        long long rst =0, sign =1, num=0;
        stack<int> nums, ops;
        
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                num = num*10 + s[i] - '0';
            }else{
                rst += sign*num;
                num = 0;
            if(s[i]=='+') sign =1;
            else if(s[i]=='-') sign = -1;
            else if(s[i]=='(')
            {
                nums.push(rst);
                ops.push(sign);
                rst = 0;
                sign =1;
            }else if(s[i]==')' && ops.size())
            {
                rst = ops.top()*rst + nums.top();
                nums.pop(); ops.pop();
            }
            }
        }
        
        return rst+= sign*num;
    }
};
