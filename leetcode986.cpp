#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
  vector<vector<int>> intervalIntersection(vector<vector<int>> &A, vector<vector<int>> &B)
  {
    vector<vector<int>> res;
    for (int i = 0; i < A.size(); i++)
    {
      for (int j = 0; j < B.size(); j++)
      {
        if (A[i][1] >= B[j][0] and A[i][0] <= B[j][1])
        {
          vector<int> ans;
          ans.push_back(max(A[i][0], B[j][0]));
          ans.push_back(min(A[i][1], B[j][1]));
          res.push_back(ans);
        }
      }
    }
    return res;
  }
};