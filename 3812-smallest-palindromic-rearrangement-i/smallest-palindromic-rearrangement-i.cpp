class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        string s1 = s.substr(0,(n/2));
        sort(s1.begin(), s1.end());
        string ans = s1;
        reverse(s1.begin(),s1.end());
        if(n&1) ans += s[n/2];
        ans += s1;

        return ans;
    }
};