class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n  = sqrt(area);
        while(area%n!=0)
        {
            n--;
        }
        int x = area/n;
      int y = min(x, n); x = max(x, n);
        return {x, y};
    }
};
