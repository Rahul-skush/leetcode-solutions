class Solution {
public:
    string removeKdigits(string num, int k) {
        //store minima indexes;
        stack<int> st;
        int i =0, n = num.size();
        for(;i<n;i++)
        {
           while(k>0 && st.size() && st.top()>num[i]) {st.pop(); k--;}
            st.push(num[i]);
        }
        while(k>0 && st.size()) {st.pop(); k--;}
        string s;
        while(!st.empty()) {s +=st.top(); st.pop();}
        
        reverse(s.begin(), s.end());
        
        string ans;
         i =0;
        while(i<s.size() && s[i]=='0') i++;
        while(i<s.size()) ans += s[i++];
        if(ans.size()==0) return "0";
        return ans;
    }
};

