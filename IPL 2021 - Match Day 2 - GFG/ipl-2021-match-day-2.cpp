// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        unordered_map<int, int> mp;
        priority_queue<int> pq;
        int j =0;
        for(int i =0;i<n;i++)
        {
            pq.push(arr[i]);
            k--;
            if(k<=0) {
                while(!pq.empty() && mp.count(pq.top()) && mp[pq.top()]>0)
                {
                    mp[pq.top()]--;
                    pq.pop();
                }
                ans.push_back(pq.top());
                mp[arr[j]]++;
                j++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends