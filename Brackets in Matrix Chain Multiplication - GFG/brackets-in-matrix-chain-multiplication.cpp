// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
string s;
    string matrixChainOrder(int p[], int n){
        
        vector<vector<int>> bracket(n, vector<int>(n, 0));
        vector<vector<int>> mat(n, vector<int>(n, INT_MAX));
        int ans = find(1, n-1, p, bracket, mat);
        
        char name = 'A';
        
         findParent(1, n-1, bracket, name);
        return s;
    }
    
    int find(int l, int r, int p[], vector<vector<int>> &bracket, vector<vector<int>> &mat)
    {
        if(l>=r) return 0;
        if(mat[l][r]!=INT_MAX) return mat[l][r];
        int ans = INT_MAX;
        for(int j=l;j<r;j++)
        {
            int cnt = find(l, j, p, bracket, mat) + find(j+1, r, p, bracket, mat) + p[l-1]*p[j]*p[r];
            
            if(cnt<ans)
            {
             bracket[l][r] = j;
             
             ans = cnt;
            }
            
        }
        //cout<<ans<<" ";
        return mat[l][r] = ans;
    }
    
    void findParent(int i, int j, vector<vector<int>> &bracket, char &name)
    {
        if(i>=j) {
            s+=name++;
            return ;
        }
        
        s+='(';
        findParent(i, bracket[i][j], bracket, name);
        findParent(bracket[i][j] +1, j, bracket, name);
        s+=')';
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends