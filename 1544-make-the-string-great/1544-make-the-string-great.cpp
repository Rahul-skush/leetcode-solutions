class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(auto c :  s)
        {
            if(!st.empty() && check(c, st.top())) {st.pop(); continue;}
            else st.push(c);
        }
        
        string str;
        while(!st.empty())
            str+= st.top(), st.pop();
        
        reverse(str.begin(), str.end());
        return str;
    }
    
    bool check(char c, char x)
    {
        if((c>='a' && c<='z') && (x>='A'  && x<='Z'))
        {
            return (c-'a')==(x-'A');
        }else if((x>='a' && x<='z') && (c>='A'  && c<='Z'))
        {
            return (x-'a')==(c-'A');
        }
        return 0;
    }
};