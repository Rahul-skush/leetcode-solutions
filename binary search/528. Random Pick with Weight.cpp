class Solution {
public:
    vector<int> prob;
    int n =0;
    Solution(vector<int>& w) {
        n = w.size();
        prob.resize(n);
        prob[0] = w[0];
        for(int i=1;i<n;i++)
            prob[i] = w[i] + prob[i-1];
    }
    
    int pickIndex() {
        int random = rand()%prob.back();
        int index = upper_bound(prob.begin(), prob.end(), random)-prob.begin();
        return index;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
