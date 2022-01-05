// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    vector<ull> v(n);
	    int t1 =0, t2 =0, t3 =0;
	    v[0] =1;
	    for(int i=1;i<n;i++)
	    {
	        v[i] = min({v[t1]*2, v[t2]*3, v[t3]*5});
	        if(v[i]==v[t1]*2) t1++;
	        if(v[i]==v[t2]*3) t2++;
	        if(v[i]==v[t3]*5) t3++;
	        //cout<<v[i]<<" ";
	    }
	   return v[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends