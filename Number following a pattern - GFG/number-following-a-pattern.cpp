// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
       
       string ans;
       int i =0, curr =1, dcount =0;
       while(i<S.size())
       {
           if(i==0 &&  S[i]=='I')
           ans += to_string(curr++);
           
           if(S[i]=='D') dcount++;
           int j = i+1;
           while(j<S.size() && S[j]=='D')
           {dcount++; j++;}
           int k = dcount;
           while(dcount>=0)
           {
               ans += to_string(curr + dcount);
               dcount--;
           }
           curr += k+1;
           dcount =0;
          i =j;
       }
       
       return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends