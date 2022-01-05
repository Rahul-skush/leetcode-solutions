// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        if(m==1) return 1;
        if(m==2) return 2;
        int a =1, b =2;
        for(int i=3;i<=m;i++)
        {
            int c;
            if(i&1) c =b;
            else c = a+1;
            
            a=b;
            b =c;
        }
        
        return b;
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends