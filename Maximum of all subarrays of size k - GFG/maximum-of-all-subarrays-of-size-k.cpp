// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        int i=0, j =0;
        vector<int> v;
        while(i<n)
        {
            while(i<n && !dq.empty() && dq.back()<arr[i])
            dq.pop_back();
            
            dq.push_back(arr[i]);
            
            if(i>=k-1)
            {
                v.push_back(dq.front());
                if(arr[j]==dq.front()) dq.pop_front();
                j++;
            }
            i++;
            
        }
        
        return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends