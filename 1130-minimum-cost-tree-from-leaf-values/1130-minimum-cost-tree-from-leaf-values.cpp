class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res =0;
        vector<int> st = {INT_MAX};
        for(int i : arr)
        {
            while(st.back()<=i)
            {
                int mid = st.back(); st.pop_back();
                res += mid*min(st.back(), i);
            }
            st.push_back(i);
        }
        
        for(int i=2;i<st.size();i++)
            res += st[i]*st[i-1];
        return res;
        
    }
};




//   int res = 0;
//         vector<int> stack = {INT_MAX};
//         for (int a : A) {
//             while (stack.back() <= a) {
//                 int mid = stack.back();
//                 stack.pop_back();
//                 res += mid * min(stack.back(), a);
//             }
//             stack.push_back(a);
//         }
//         for (int i = 2; i < stack.size(); ++i) {
//             res += stack[i] * stack[i - 1];
//         }
//         return res;