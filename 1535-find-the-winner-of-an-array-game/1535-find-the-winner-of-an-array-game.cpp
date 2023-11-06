class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
         int s = 0, i =1, n = arr.size();
      if(k>=n)
      {
          int gr = -1;
          for(int i : arr)
              gr = max(gr, i);
          return gr;
      }
    
        map<int, int> mp;
        while(i<n)
        {
            if(arr[i]>=arr[s])
                swap(arr[i], arr[s]);
             arr.push_back(arr[i]);
            mp[arr[s]]++;
            if(mp[arr[s]]==k) return arr[s];
            i++;
        }
        return arr[0];
    }
};
