class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i =0, j = S.length()-1;
        while(i<j)
        {
            while(i<j && !isalpha(S[i]))i++;
            while(i<j && !isalpha(S[j])) j--;
            swap(S[i], S[j]);
            i++; j--;
        }
        return S;
    }
};
