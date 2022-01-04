// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	int mod =1e9+7;
	unordered_map<int, long long> mp;
		int CountWays(string str){
		    // Code here
		    if(str[0]=='0') return 0;
		    return find(0, str);
		}
		
		int find(int i, string s)
		{
		    if(i>=s.size()) return 1;
		    if(mp.count(i)) return mp[i];
		    int f =0;
		    if(i+1<s.size())
		    {if(s[i]=='2' && s[i+1]<='6' ) f=1;
		        if(s[i]=='1' && s[i+1]<='9' ) f=1;
		    }
		    
		    
		    return mp[i] = ((s[i]!='0'?find(i+1, s):0) + (f==1?find(i+2, s):0)  + 0)%mod;
		    
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends