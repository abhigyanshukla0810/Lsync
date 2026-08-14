class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0, j = 0, n = s.size(), maxlen = 0;
        unordered_map <char,int> mpp;
        while(j<n){
            mpp[s[j]]++;
            while(i<j && mpp[s[j]] > 2){
                mpp[s[i]]--;
                i++;
            }
            maxlen = max(maxlen, j-i+1);
            j++;
        }
        return maxlen;
    }
};