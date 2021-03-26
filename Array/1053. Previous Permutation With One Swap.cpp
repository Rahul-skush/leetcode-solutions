class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& A) {
        int l = -1, n= A.size();
        for(int i = n-1; i>0; i--){
            if(A[i-1]>A[i]){
                l = i-1;
                break;
            }
        }
        if(l == -1)
            return A;
        int r = l+1;
        for(int i = l+1; i<n; i++){
            if(A[i]< A[l] && A[r] < A[i]) 
                r = i;
        }
        swap(A[l], A[r]);
        return A;
    }
};
