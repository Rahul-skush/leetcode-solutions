// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int, int> mp;
        for(auto x : nums)
        mp[x%k]++;
        
        for(auto x : mp)
        {
            int one = x.first;
            int two = k - x.first;
            if(two==k) two =0;
            if(one==two){
                if(mp[one]%2) return 0;
                else continue;
            } 
            if(mp[one]!=mp[two]) return 0;
        }
        
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends