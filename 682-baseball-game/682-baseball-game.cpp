class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(auto x : ops)
        {
            if(x=="+")
            {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                
                st.push(b);
                st.push(a);
                st.push(a+b);
            }else if(x=="D")
            {
                st.push(2*st.top());
            }else if(x=="C") st.pop();
            else {st.push(stoi(x));}
        }
        
        int ans =0;
        while(!st.empty())
            {
            ans+= st.top(); st.pop();}
        
        return ans;
    }
};