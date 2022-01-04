// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<string> st;
        for(auto c : s)
        {
            if(c==']')
            {
                string str, sp, no;
                while(!st.empty() && st.top()!="[")
                    {str+= st.top(); st.pop();}
                    //reverse(str.begin(), str.end());
                    st.pop();
                    while(!st.empty() && st.top()>="0" && st.top()<="9")
                    {no+=st.top(); st.pop();}
                    
                    reverse(no.begin(), no.end());
                    int n = stoi(no);
                    
                    while(n--)
                    sp += str;
                    st.push(sp);
            }else 
            {
                string str ;
                str+=c;
                st.push(str);
            }
        }
         s = st.top();
        reverse(s.begin(), s.end());
        return s;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends