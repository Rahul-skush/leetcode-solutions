// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    
	    vector<char> st = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};
	    
	    unordered_set<char> nut;
	    for(int i=0;i<n;i++)
	    nut.insert(nuts[i]);
	    
	     int i=0, j=0;
	     while(i<9)
	     {
	         if(nut.find(st[i])!=nut.end())
	         nuts[j++]= st[i];
	         i++;
	     }
	     
	     unordered_set<char> bolt;
	    for(int i=0;i<n;i++)
	    bolt.insert(bolts[i]);
	    
	      i=0, j=0;
	     while(i<9)
	     {
	         if(bolt.find(st[i])!=bolt.end())
	         bolts[j++]= st[i];
	         i++;
	     }
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends