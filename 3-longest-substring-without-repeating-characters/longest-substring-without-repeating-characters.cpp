class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, result = 0;
        int n = s.size();
        unordered_map <char,int> mpp;
        while(j<n){
            mpp[s[j]]++;
            while( i<n &&mpp[s[j]] > 1){
                mpp[s[i]]--;
                i++;
            }
            result = max(result, j-i+1);
            j++;
        }
        return result;
    }
};