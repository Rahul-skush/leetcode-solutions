// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(int arr[], int n) {
        int one=0, xr =0, two=0, f=0;
        for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]<0 && f==0) {one = abs(arr[i]); f=1;}
            else arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            xr ^= i+1;
            xr ^= abs(arr[i]);
        }
        xr^=one;
        
        two = xr;
        //cout<<one<<" "<<two;
        vector<int> v(2) ;
        v[1] = two;
        v[0] = one;
        
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends