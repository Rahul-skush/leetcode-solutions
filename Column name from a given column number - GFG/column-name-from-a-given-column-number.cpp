// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        
        string ans;
        while(n)
        {
            int rem = n%26;
            n/=26;
            if(rem==0)
            {ans += 'Z'; n= n-1;}
            else
            ans += 'A' + rem-1;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends